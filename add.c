#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  printf("%i\n", (int)a + (int)b);
  return (int)(a + b);
}
