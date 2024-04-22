// create a program that stores name, mobile, village of profile member and print all

// step1 - user need to enter inputs and should display all records

// step2 - Algorithm

//////////////////////////////////////////////////
//
//  START
//  Ask user if he wants to see records or create new
//  If user want to create new record
//  Store the records
//  If user wants to view available records
//  Display all records
//  STOP
//
/////////////////////////////////////////////////

// step3 - We will us CPP language

#include <iostream>
#include <string>
using namespace std;

//////////////////////////////////////////////////////////////////
//
//  Class Name      : pf
//  Description     : Blueprint of Profile Members
//  Characteristics : String, Int, String
//  Behaviour       : input (Stores Records), Output (Display Records)
//  Author          : Sanket
//  Date            : 19-04-24
//
//////////////////////////////////////////////////////////////////

class pf
{
public:
    string name;
    long int mob;
    string location;

    void input()
    {
        cout << " Enter Name     : \t";
        cin >> name;
        cout << " Enter Mob      : \t";
        cin >> mob;
        cout << " Enter Location : \t";
        cin >> location;
    }
    void output()
    {
        cout << " Name         : \t" << name << endl;
        cout << " Mob          : \t" << mob << endl;
        cout << " Location     : \t" << location << endl;
        cout << " \n";
    }
};

int main()
{
    int iLoopCounter1 = 0, iEntryCounter = 0, iLoopCounter2 = 0, iChoice = 0;
    pf *arr = new pf[20];

    while (true)
    {
        cout << " \n 1. To Enter Record \n 2. Display Record \n 3. Exit\n ";
        cin >> iChoice;
        if (iChoice == 3)
            break;

        switch (iChoice)
        {

        case 1:

            arr[iLoopCounter1].input();
            iEntryCounter++, iLoopCounter1++;
            cout << " " << iEntryCounter << " Record inserted \n";
            break;

        case 2:
            if (iEntryCounter == 0)
            {
                cout << "\n No record available ";
            }
            else
            {
                cout << "\n " << iEntryCounter << " Records available ";
                cout << " \n Displaying Record........\n\n";

                for (iLoopCounter2 = 0; iLoopCounter2 < iEntryCounter; iLoopCounter2++)
                {
                    arr[iLoopCounter2].output();
                }
            }
            break;

        default:
            cout << "\n Enter Correct Choice\n ";
        }
    }
    delete (arr);
    return 0;
}
