// problem statement : Accept 2 numbers from user and perform its addition

#include <stdio.h>
int main()
{
  // int i, j, k;
  int iValue1 = 0, iValue2 = 0;
  int iResult = 0;
  printf("Enter your first number\n");
  scanf("%d", &iValue1);

  printf("Enter your first number\n");
  scanf("%d", &iValue2);

  iResult = iValue1 + iValue2;

  printf("your Answer is:\n,%d", iResult);

  return 0;
}