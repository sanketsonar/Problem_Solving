// Data type modifier 
// problem accept no form user and conclude that it is even or odd

#include<stdio.h>
#include<stdbool.h>
// User is going to enter only positive number inputs
// Algorithm
/* 
   START 
      Accept on number as No
      Divide that number No by 2
      if reminder is 0
      then display the number is even number
      otherwise display its an odd number
    STOP
*/


////////////////////////////////////////////////////////////////////
// 
//  Function Name :     CheckEvenOdd
//  Description :       Used to check wheather number is even or odd
//  Input :             integer
//  Output :            boolean
//  Author :            Shree Satshakti
//  Date :              16/04/2024
//
////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(unsigned int iNo)
{
   if ((iNo % 2) == 0)
   {
     return true;
   }
   else
   {
     return false;
   }

}
int main ()
{
    unsigned int iValue=0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf ("%d", & iValue);
    
    bRet = CheckEvenOdd(iValue);

    if (bRet == true)
    {
        printf("%d is a even number\n", iValue);

    }
    else
    {
        printf("%d is a Odd number\n", iValue);
        
    }

    return 0;
}