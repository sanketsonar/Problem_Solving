// program to find the sum of array element and also gets the maximum value in an array

// Step2 - element are only natural numbers size also varies.

// Step3 - Algorithm

////////////////////////////////////////////////////////////////////
//  
//  START
//  Get the no numbers of element that we are going to add
//  Perform addition of the element
//  comapare elements 
//  get maximum in them
//  display addition and max value from the elements
//
///////////////////////////////////////////////////////////////////

// Writing this code in C++ language

#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////
//
//  Function Name : ArrayAddition
//  Description   : Perform addition of array elements
//  Input         : Int array, Int 
//  Return value  : Int
//  Author        : Sanket
//  Date          : 18-04-24
//
/////////////////////////////////////////////////////////////////


int ArrayAddition(int a[], int size)
{
    int i = 0, sum = 0;

    for(i=0; i<size; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name : ArrayMax
//  Description   : Gives Maximum value in array
//  Input         : Int array, Int 
//  Return value  : Int
//  Author        : Sanket
//  Date          : 18-04-24
//
/////////////////////////////////////////////////////////////////

int ArrayMax(int a[], int size)
{
    int i = 0;
    int fMax = a[i];
   
        if(a[1]>a[2])
        {   fMax=a[1];   }
        else
        { fMax=a[2];     }
    
    for(i = 3; i<size; i++)
    { 
        if(fMax<a[i])
            fMax = a[i];

    }   

    return fMax;
}


int main()
{
    int iSize = 0, iCounter;
    int arr[iSize];
    int fMax = 0, fAddition = 0;

    cout<<"\n\n========================== Shri Radhe Techonologie ===============================\n\n"<<endl;
    cout<<"Enter the total number of element you want to enter : "<<"\t";
    cin>>iSize;
    cout<<"\n Enter elements : \t";

    for(iCounter=0; iCounter<iSize; iCounter++)
    {
        cin>>arr[iCounter];
    }
    
    cout<<"The "<<iSize<<"\n elements you entered are : "<<"\t";
    for(iCounter=0; iCounter<iSize; iCounter++)
    {
        cout<<arr[iCounter]<<",\t";
    }

    fAddition = ArrayAddition(arr,iSize);
    fMax = ArrayMax(arr,iSize);

    printf(" \n\nThe Maximum value entered is : %d\n", fMax);
    printf(" The sum of element is : %d\n", fAddition);
    cout<<"\n\n================================== Thank You! ====================================\n\n"<<endl;


    return 0;
}
