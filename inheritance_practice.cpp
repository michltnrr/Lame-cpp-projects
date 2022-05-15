#include <iostream>
#include <string>
using namespace std;

class Person
{
    public:
    string name;
    int age;
    string residence;

    void DisplayPersonInfo()
    {
        cout << name << " is " << age << " years old and lives in " << residence << endl;
    }
    
};


class Student
{
    public:
    bool Ismale;
    string name;
    string major;
    int year;

    void gender()
    {
        if (Ismale)
            cout << name << " is a male" << endl;
        else
            cout << name << " is a female" << endl;
    }

     void IntroduceSelf()
    {
        cout << "My name is " << name << " and im studying " << major <<  " and I'm in year " << year << endl;
    }

   
};

class Femalestudent: public Student
{
    public:
    Femalestudent()
    {
        Ismale = false;
    }
};

class MaleStudent : public Student
{
    public:
    MaleStudent()
    {
        Ismale = true;
    }
};

class Programmer
{
    public:
    string name;
    void Lifesimulation()
    {
        cout << name << " wakes up and starts working, then " << name << " went for lunch, later he went to sleep" \ 
        "\nTHE END"<< endl;
    }

};

//using private inheritance to access private member name, by using a public method in the derived class
class Scientitst: private Programmer
{
    public:
    
    void Setname(string dudesname)
    {
        name = dudesname;
    }

    void Initiate()
    {
        Lifesimulation();
    }
};

// using protected inheritnace to get access to protected and public data of base from derived class
class Man
{
    protected:
    float income;
    string name;
    string occupation;

    public:
    void displayCredentials()
    {
        cout << name << " is a " << occupation << " and makes " << income << " dollars a year" << endl; 
    }

};


class Homosapien: protected Man
{
    public:

    void Something(float salary, string guysName, string job)
    {
        
        income = salary;
        name = guysName;
        occupation = job;
        
        
    }

    void Invoke()
    {
        displayCredentials();
    }
};



int main()
{
   Person man;

   man.name = "mike";
   man.age = 18;
   man.residence = "michigan";

   Person woman; 
   
   woman.name = "Deila";
   woman.age = 24;
   woman.residence = "Dubai";

   man.DisplayPersonInfo();
   woman.DisplayPersonInfo();

   MaleStudent dude;
   dude.name = "John";
   dude.year = 11;
   dude.major = "Math";

   dude.gender();
   dude.IntroduceSelf();

   Femalestudent chick;
   chick.name = "sarah";
   chick.year = 9;
   chick.major = "computer science";

   chick.gender();
   chick.IntroduceSelf();


   Scientitst engineer;
   engineer.Setname("Lex");
   engineer.Initiate();


   Homosapien guy;
   guy.Something(850.50, "Jared", "VC");
   guy.Invoke();

   


}