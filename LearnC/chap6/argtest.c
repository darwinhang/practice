/* test command line args for C program */
#include <stdio.h>

int main(int argc, char *argv[])
{

  printf("argc value: %d\n", argc);

  while (--argc > 0) {
    printf((argc > 1) ? "%s" : "%s", *++argv);
    printf("\n");
  }
  return 0;
}
