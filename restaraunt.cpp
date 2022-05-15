#include <iostream>
using namespace std;

void Menu()
{
    cout << "*************WELCOME TO TIG BIDDY BURGERS***************" << endl;
    cout << "1.ENTER 'v' TO VIEW THE MENU" << endl;
    cout << "ENTER 'x' TO EXIT" << endl;
    cout << "********************************************************" << endl;

}


int main()
{
   Menu();

   double sprite = 6.25;
   double coke = 6.75;
   double lemonade = 3.05;
   double punch = 3.05;
   double sumofDrinks = sprite + coke + lemonade + punch;

   double salsa = 1.25;
   double gBread = 1.25;
   double miniMeat = 1.25;
   double sumofMunch = salsa + gBread + miniMeat;


   double burg = 11.25;
   double pasta = 12.45;
   double chickqs = 8.25;
   double chknrc = 9.05;
   double sumOfEntrees = burg + pasta + chickqs + chknrc;


   double browns = 13.25;
   double cakeCream = 14.05;
   double poodn = 12.57;
   double sumofDeserts;

    char option;
    cin >> option;

    double total = sumofDrinks + sumOfEntrees+ sumofMunch + sumofDeserts;

    
do {
        
        switch(option)
        {
            case 'v':
            case 'V':
                
                cout << "Choose your dish: " << endl;
                cout << "1.DRINKS" << endl;
                cout << "2.APETIZERS" << endl;
                cout << "3.ENTRESS" << endl;
                cout << "4.DESSERTS" << endl;
                int input;
                cin >> input;

                
             
                

            switch(input)
            {
                
                case 1:

                    cout << "\t *****SOFT DRINKS*****" << endl;
                    cout << "\n";
                    cout << "\t *****Select your Beverage********" << endl;
                    cout << "\t      1.Sprite........ $" << sprite << endl;
                    cout << "\t      2.Coke.......... $" << coke << endl;
                    cout << "\t      3.Lemonade...... $" << lemonade << endl;
                    cout << "\t      4.Fruit Punch... $" << punch << endl;
                    break;
                    

                case 2:
                   
                    cout << "\t *****MUNCHIES*****" << endl;
                    cout << "\t     1.Chips & Salsa.. $" << salsa <<  endl;
                    cout << "\t     2.Garlic Bread.. $" << gBread << endl;
                    cout << "\t     3.Mini Meatballs.. $" <<miniMeat << endl;
                    break;


                case 3:
                    cout << "\t *****MAIN DISH*****" << endl;
                    cout << "\t      1.Michigan Cheeseburger.. $" << burg <<  endl;
                    cout << "\t      2.Shagetti & Meatballs.. $" << pasta << endl;
                    cout << "\t      3.Chicked quesadillas.. $" << chickqs << endl;
                    cout << "\t      4.Chicken & Rice.. $" << chknrc << endl;
                    break;

                case 4:
                    cout << "\t *****DESSERTS*****" << endl;
                    cout << "\t      1.Brownies (8 Slices).. $" << browns <<  endl;
                    cout << "\t      2.Cake & Ice Cream.. $" <<cakeCream << endl;
                    cout << "\t      3.Bannana Pudding.. $" << poodn << endl;
                    break;

            } break;

            case 'x':
            case 'X':
            break;

            default:
                cout << "ERROR: INVALID INPUT (command not found)" << endl;
                break;
        
        }    
    }  while (option != 'x'); 

    
}
