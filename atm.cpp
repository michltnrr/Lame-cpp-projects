#include <iostream>
using namespace std;

void DisplayMenu()
{
    cout << "*********WELCOME TO TURNER BANK ATM*********" << endl;
    cout << "1. CHECK BALANCE"<< endl;
    cout << "2. DEPOSIT CASH" << endl;
    cout << "3. WITHDRAW" << endl;
    cout << "4. ENTER 4 TO EXIT" << endl;
    cout << "**********************************************" << endl;
}

int main()
{
    DisplayMenu();

    

    double balance = 2500.00;

    int input;
    cin >> input;

   

    do{
        DisplayMenu();
        cout << "Input: ";
        int input;
        cin >> input;

        switch(input)
        {
        case 1:
            cout << "Current balance: $" << balance << endl;
            break;
       case 2:
             cout << "Balance after deopsit: "  << endl;
             double depositAmount;
             cin >> depositAmount;
             balance += depositAmount;
             cout << "$" << balance;
             break;
        
        case 3:
            double withdrawlAmount;
            cin >> withdrawlAmount;

            if (withdrawlAmount <= balance)
            {
                cout << "Balance after withdrawl: " << endl;
                balance -= withdrawlAmount;
                cout << "$" << balance;
            }
              
            else
                cout << "Insufficent funds" << endl;
                break;

        case 4:
            break;
                
        
        default:
            cout << "Invalid input" << endl;
            break;
        
        }


    } while (input != 4);



}