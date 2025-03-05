#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


// ENUM for better code readability.
typedef enum { // anynomous enum
    CAPITALIZED,
    UNCAPITALIZED,
    NOT_ALPHA
} eCap_t;

static inline eCap_t isAlpha(char c) {
    // Initialize and make sure single exit of the function. 
    eCap_t ret = NOT_ALPHA;
    if ((c >= 'a') && (c <= 'z')) {
        ret = UNCAPITALIZED;
    } 

    if ((c >= 'A') && (c <= 'Z')) {
        ret = CAPITALIZED;
    } 
    return ret;
}

bool isPalindrome(char * s){
    // NULL Pointer check.
    if (NULL == s) {
        return false;
    }

    eCap_t eCap = UNCAPITALIZED;

    int taili = strlen(s) - 1;
    int maxlen = strlen(s) - 1;
    int headi = 0;
    while (taili >= headi) {
        while (isAlpha(s[headi]) == NOT_ALPHA) {
            ++headi;
        }

        // fault detection
        if (headi > maxlen) {
            break;
        }

        if (isAlpha(s[headi]) == CAPITALIZED) {
            s[headi] = s[headi] - 'A';
        }


        while (!isAlpha(s[taili]) == NOT_ALPHA) {
            --taili;
        } 

        if (taili < 0) {
            break;
        }

        if (isAlpha(s[taili]) == CAPITALIZED) {
            s[taili] = s[taili] - 'A';
        }

        // Now compare;
        if (s[taili] != s[headi]) {
            return false;
        } else{
            taili--;
            headi--;
        }
    }

    return true;
}

void main() {
    char s[] = "A man, a plan, a canal: Panama";
    printf("s is palindrome: %s\n", isPalindrome(s) ? "true" : "false");
}