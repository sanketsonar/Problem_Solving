#include <stdio.h>

float Addition(float fNo1, float fNo2)
{
  float fAns = 0.0f;
  fAns = fNo1 + fNo2;
  return fAns;
}

int main()
{
  float fValue1 = 0.0f, fValue2 = 0.0f;
  float fResult = 0.0f;
  printf("Enter your first number\n");
  scanf("%f", &fValue1);

  printf("Enter your second number\n");
  scanf("%f", &fValue2);

  fResult = Addition(fValue1, fValue2);

  printf("your Answer is:\n %f", fResult);

  return 0;
}