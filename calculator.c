#pragma once
#include <stdio.h>
//#include "calculator.h"

struct Calculator
{
  float(*add)(float, float);
  float(*sub)(float, float);
  float(*mult)(float, float);
  float(*div)(float, float);

  float number;
};

float addition(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if(b != 0)
    {
        return a / b;
    }

    else
    {
        printf("ERROR! Tried dividing by zero. No division was made\n");
        return a;
    }
}