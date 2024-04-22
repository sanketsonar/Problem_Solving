// Data type modifier 
// cproblem accept no form user and conclude that it is even or odd

#include<stdio.h>
#include<stdbool.h>
// User is going to enter only positive number inputs
// Algorithm
/* 
   START 
      Accept on number as No
      Divide that number No by 3
      if reminder is 0
      Divide that number No by 5
      if reminder is 0
      then print number is divisible by 3 and 5
      otherwise display its an odd number
    STOP
*/


////////////////////////////////////////////////////////////////////
// 
//  Function Name :     CheckDivisible
//  Description :       Used to check wheather number is divisible by 3 and 5
//  Input :             integer
//  Output :            boolean
//  Author :            SriSatshakti
//  Date :              16/04/2024
//
////////////////////////////////////////////////////////////////////

bool CheckDivisible(unsigned int iNo)
{
   if (((iNo % 3) == 0) && ((iNo % 5) == 0))
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
    
    bRet = CheckDivisible(iValue);

    if (bRet == true)
    {
        printf("%d is divisible by 3 and 5\n", iValue);

    }
    else
    {
        printf("%d is not divisible by either 3 or 5\n", iValue);
        
    }

    return 0;
}

/*
Logical && operator

first   second  &&(and) ||(or)
true    true    true    ture
false   true    false   true
true    false   false   true
false   false   false   false


*/