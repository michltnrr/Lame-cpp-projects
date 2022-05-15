#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDice(int num)
{
    int die1, die2;
    int sum;
    int rollCount = 0;

    srand(time(0)); //tf does this do?

    do
    {
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;
        sum = die1 + die2;
        rollCount++;
    } while(sum != num);

    return rollCount;
}

int main()
{
    cout << "Enter your the number you want the die to add up to: " << endl; 
    int dieSum;
    cin >> dieSum;
    cout << "It took " << rollDice(dieSum) << " rolls for the die to get " << dieSum << endl;
    
 
}

