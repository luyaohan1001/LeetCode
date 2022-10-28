#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}
void reverseString(char *pCharArray) {  
    const int strLen = strlen(pCharArray);
    for (int i = 0; i < (strLen >> 1); ++i) {
        swap(&pCharArray[i], &pCharArray[strLen - i - 1]);
    }
}

int main() {
    char randomString[] = "1 2 3 4 5 a b c\n";
    reverseString(randomString);
    printf("%s\n", randomString);
    return 0;
}