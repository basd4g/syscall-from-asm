typedef int size_t;
size_t write_asm(int fd, void *buf, size_t count);

void printf_mylibc(char *str) {
  int len=0;
  while(str[len] != '\0')
    len++;

  write_asm(1, str, len);
}

int main(void) {
  printf_mylibc("hello, world!");
  return 10;
}
