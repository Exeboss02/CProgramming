#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"

int main(int argc, char *argv[]){

  char* string = "HELLO";
  for (int i = 0; i < 5; i++)
  {
    printf("%c", string[i]);
  }
  printf("\n");
  
  struct Calculator myCalculator = {addition, subtract, multiply, divide, 0};
  myCalculator.number = 0;

  printf("%f\n", myCalculator.number);
  myCalculator.number = myCalculator.add(myCalculator.number, 5);
  printf("%f\n", myCalculator.number);

  myCalculator.number = myCalculator.div(myCalculator.number, 0);
  myCalculator.number = myCalculator.div(myCalculator.number, 3);
  myCalculator.number = myCalculator.mult(myCalculator.number, 7);
  myCalculator.number = myCalculator.sub(myCalculator.number, 13);
  div(5, 9);

  printf("%f\n", myCalculator.number);

  return 0;
}
