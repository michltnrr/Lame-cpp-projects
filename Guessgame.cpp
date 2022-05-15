#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int Randnum = rand() % 20 + 1;
    int guess;
    cout << "Enter a random number from 1 to 20" << endl;
    cout << "Take a guess you have 6 tries" << endl;

 do {
      for(int i = 0, x = 6; i < 6; i++, x--)
    {
        cin >> guess;
        cout << "You have " << x << " tries left" << endl;


        if(guess > Randnum)
        {
            cout << "Your guess is too high try guessing lower" << endl;
        }

        else if(guess < Randnum)
        {
            cout << "Your guess is too low try going higher" << endl;
        } 

        else
            break;

    }

    if(guess == Randnum)
    {
        cout << "W!!" << endl;
    }

    else
    {
        cout << "L BOZO!! the correct answer was " << Randnum << " gg tho lol";
    }
        
 } while (guess != Randnum);
    
}
