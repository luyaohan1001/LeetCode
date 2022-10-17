#include <stdio.h>
#include <stdlib.h>

// assumes caller calls free.
int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    // Each row has an array pointer
    int retSize = 0;
    int **pascalTree = (int **)malloc(sizeof(int **) * numRows);

    for (int i = 1; i <= numRows; ++i) {
        // create a triangle
        pascalTree[i-1] = (int *)malloc(sizeof(int) * i);
        // populate values
        if (i == 1) {
            pascalTree[i][0] = 1;
            retSize += 1;
        } else {
            for (int j = 0; j < i; ++j) {
                if (j == 0 || j == (i - 1)) {
                    pascalTree[i][j] = 1;
                } else {
                    pascalTree[i][j] = pascalTree[i-1][j-1] + pascalTree[i-1][j];
                }
                retSize += 1;
            }
        }
    }
    *returnSize = retSize;
    return pascalTree;
}


void main() {
    int returnSize, columnSize;
    generate(5, &returnSize, &columnSize);
}