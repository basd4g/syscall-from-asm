#include <stdlib.h>
#include <stdio.h>
char str[100] = {};
int main() {
  int base = 0;
  printf("base:");
  scanf("%d", &base);
  printf("str:");
  scanf("%s", str);
  int len = strlen(str);
  char *nptr = str;
  char *endptr = str+len;
  long ret = strtol(str, &endptr, base);
  printf("input: %s\nstrtol(%x, %x (%x), %d)\nreturn value: %d\nendptr: %x", str, str, &endptr, str+len, base, ret, endptr);
}
