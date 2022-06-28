/**
 * @file main.c 
 * @author Luyao Han (luyaohan1001@gmail.com)
 * @brief LRU Cache in C --  the FreeLRUCache still has memory related issues but other functions works. 
 * @version 0.1
 * @date 2022-06-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdlib.h>
#include <stdio.h>

/* Function Prototypes */

typedef struct node{
    int key;
    int value;
    struct node *next;
    struct node *prev;
} node_t;

typedef struct {
    int capacity;
    int length;
    node_t *p_head;
    node_t *p_tail;
} LRUCache_t;


void cache_evict_lru(LRUCache_t *obj);
void ll_delete_tail(LRUCache_t *obj);
void ll_insert_head(LRUCache_t *obj, node_t *node_to_insert);
node_t *ll_find_node(LRUCache_t *obj, int search_key);
void move_to_head(LRUCache_t *obj, node_t *node);

LRUCache_t* LRUCacheCreate(int capacity);
int LRUCacheGet(LRUCache_t* obj, int key);
void LRUCachePut(LRUCache_t* obj, int key, int value);


void cache_evict_lru(LRUCache_t *obj)
{
    ll_delete_tail(obj);
}

inline void ll_delete_tail(LRUCache_t *obj)
{
    if (obj->p_tail == NULL)
    {
        return;
    }
    node_t *temp = obj->p_tail;
    obj->p_tail = temp->prev;

    if (obj->p_tail != NULL)
    {
        obj->p_tail->next = NULL;
    }
    
    free(temp);
}


void ll_insert_head(LRUCache_t *obj, node_t *node_to_insert)
{
    if (obj->p_head == NULL && obj->p_tail == NULL)
    {
        obj->p_head = node_to_insert;
        obj->p_tail = node_to_insert; 
        return;
    }
    node_to_insert->next = obj->p_head;
    obj->p_head->prev = node_to_insert;
    obj->p_head = node_to_insert;
    node_to_insert->prev = NULL;
}

node_t *ll_find_node(LRUCache_t *obj, int search_key)
{
    node_t *iterator = obj->p_head;
    while (iterator != NULL)
    {
        if (iterator->key == search_key)
        {
            move_to_head(obj, iterator);
            return iterator;
        }
        iterator = iterator -> next;
    }
    return NULL;
}

void move_to_head(LRUCache_t *obj, node_t *node)
{
    if (obj->p_head == NULL)
    {
        obj->p_head = node;
        obj->p_tail = node;
    }

    if (node = obj->p_tail)
    {
        obj->p_tail = node->prev;
    }

    if (node->prev)
    {
        node->prev->next = node->next;
    }
    if (node->next)
    {
        node->next->prev = node->prev;
    }

    node->next = obj->p_head;
    if (obj->p_head)
    {
        obj->p_head->prev = node;
    }
    obj->p_head = node;
}


void ll_delete_head(LRUCache_t *obj)
{
    if (obj->p_head == NULL) 
    {
        return;
    }

    node_t *temp = obj->p_head;
    obj->p_head = obj->p_head->next;
    if (obj->p_head)
    {
        obj->p_head->prev = NULL;
    }
    free(temp);
}


LRUCache_t* LRUCacheCreate(int capacity)
{
    LRUCache_t* p_cache = (LRUCache_t *)calloc(1, sizeof(LRUCache_t));
    p_cache -> capacity = capacity;
    p_cache -> p_head = NULL;
    return p_cache;
}

int LRUCacheGet(LRUCache_t* obj, int key)
{
    node_t *node_with_match_key = ll_find_node(obj, key);

    if (node_with_match_key == NULL)
    {
        return -1;
    } 
    else 
    {
        return node_with_match_key->value;
    }
}

node_t *LRUCacheFree(LRUCache_t* obj)
{
    while (obj->p_head != NULL)
    {
        ll_delete_head(obj);
    }

    free(obj);
}

void LRUCachePut(LRUCache_t* obj, int key, int value)
{
    node_t *p_head = (node_t *)obj->p_head;
    node_t *p_tail = (node_t *)obj->p_tail;

    if (obj-> length >= obj->capacity)
    {
        cache_evict_lru(obj);
    }

    node_t *node_with_match_key = ll_find_node(obj, key);

    if (node_with_match_key == NULL)
    {
        node_t *new_node = (node_t *)malloc (sizeof(node_t));
        *new_node = (node_t) {key, value, NULL, NULL};

        ll_insert_head(obj, new_node);
        obj->length += 1;
    } 
    else 
    {
        node_with_match_key->value = value;
    }
    
}


void main() 
{
    LRUCache_t* p_cache = LRUCacheCreate(1);
    LRUCachePut(p_cache, 2, 1);
    int get_value = LRUCacheGet(p_cache, 2);
    printf("%d\n", get_value);


    LRUCacheFree(p_cache);
}



