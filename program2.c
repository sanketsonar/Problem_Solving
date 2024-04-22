// problem statement : Accept 2 numbers from user and perform its addition

#include <stdio.h>
int main()
{
  int i, j, k;
  printf("Enter your first number\n");
  scanf("%d", &i);

  printf("Enter your second number\n");
  scanf("%d", &j);

  k = i + j;

  printf("your Answer is: %d", k);

  return 0;
}