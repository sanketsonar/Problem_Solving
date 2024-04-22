// commenting policies


#include<stdio.h>
float Addition(
    float fNo1,             // first input
    float fNo2              // second input
    )
{
  float fAns = 0.0f;        // Variable to store result
  fAns = fNo1 + fNo2;
  return fAns;
}

int main()
{
  float fValue1 = 0.0f;         // Variable to store first input
  float fValue2 = 0.0f;         // Variable to store second input
  float fResult = 0.0f;         // Variable to store the return value
  printf("Enter your first number\n");
  scanf("%f", &fValue1);

  printf("Enter your second number\n");
  scanf("%f", &fValue2);

  fResult = Addition(fValue1, fValue2);

  printf("your Answer is:\n %f", fResult);

  return 0;
}