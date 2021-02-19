#include <stdlib.h>
#include <stdio.h>
char str[100] = "  + 3";
int main() {
  //scanf("%s", str);
  int len = strlen(str);
  char *nptr = str;
  char *endptr = str+len;
  long ret = strtol(str, &endptr, 0);
  printf("input: %s\nstrtol(%x, %x (%x), 0)\nreturn value: %d\nendptr: %x", str, str, &endptr, str+len, ret, endptr);
}
