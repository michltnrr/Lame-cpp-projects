#include <iostream>
using namespace std;

void Start()
{
    cout << "*************WELCOME TO TIG BIDDY BURGERS***************" << endl;
    cout << "1.ENTER 'v' TO VIEW THE MENU" << endl;
    cout << "ENTER '0' TO EXIT" << endl;
    cout << "********************************************************" << endl;
}

void Display()
{
   
   int input;
   cin >> input;
   
   
    cout << "1.ENTRESS" << endl;
    cout << "2.APETIZERS" << endl;
    cout << "3.DESSERTS" << endl;
    cout << "4.DRINKS" << endl;
}

int main()
{
    Start();

    char option;
    cin >> option;

    int input;
    cin >> input;

    int choice;
    cin >> choice;

    do 
    {
        Start();
        char option;
        cin >> option;

        switch(option)
        {
            case 'v':
            case 'V':
                Display();
                break;

                switch(input)
                {
                    case 1: 
                    break;
                }
        }
    } while(choice != 0);
}