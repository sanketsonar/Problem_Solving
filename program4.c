// problem statement : Accept 2 numbers from user and perform its addition 


#include<stdio.h>
int main()
{
  //int i, j, k;
  float fValue1 = 0.0f , fValue2 = 0.0f;
  float fResult = 0.0f;
 printf("Enter your first number\n");
 scanf("%f",&fValue1);

 printf("Enter your second number\n");
 scanf("%f",&fValue2);

 fResult = fValue1 + fValue2;

 printf("your Answer is:\n %f", fResult);

   return 0;
}