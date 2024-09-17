#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  long aValue = 0;
  long bValue = 0;

  if (argc > 1)
  {
    char *endptrA;
    char *endptrB;

    aValue = strtol(argv[1], &endptrA, 10);
    bValue = strtol(argv[2], &endptrB, 10);

    if(*endptrA == '\0' && *endptrB == '\0')
    {
        printf("%i\n", atoi(argv[1]) + atoi(argv[2]));
    }
    else
    {
      return -1;
    }
  }

  //int a = atoi(argv[1]);
  //int b = atoi(argv[2]);


  //printf("%i\n", a);
  //printf("%i\n", b);
  return 0;
}
