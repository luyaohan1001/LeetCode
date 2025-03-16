#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))

static inline int c2i(char c) {
  return (c - '0');
}

static inline char i2c(int i) {
  return (i + '0');
}

static inline int bitsum(int a, int b, int cin) {
  return (a + b + cin) % 10;
}

static inline int carr(int a, int b, int cin) {
  return (a + b + cin) > 9;
}

char* add_two_str(char *str1, char *str2) {
  int ret_len = MAX(strlen(str1), strlen(str2)) + 2;
  char* retstr = (char *)calloc(ret_len, sizeof(char));
  memset(retstr, '0', ret_len);

  retstr[ret_len - 1] = '\0';
  int k = ret_len - 1;

  int cin = 0;
  int i = strlen(str1) - 1;
  int j = strlen(str2) - 1;
  for (;i >= 0 && j >= 0; --i, --j) {
    retstr[--k] = i2c(bitsum(c2i(str1[i]), c2i(str2[j]), cin));
    cin = carr(c2i(str1[i]), c2i(str2[j]), cin);
  }
  return retstr;
}


int main () {
  char str1[] = "1010";
  char str2[] = "0101";
  char *retstr = add_two_str(str1, str2);
  printf("str1: %s str2: %s retstr: %s\n", str1, str2, retstr);
  free(retstr);
  return 0;
}