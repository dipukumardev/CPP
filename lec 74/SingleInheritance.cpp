#include <bits/stdc++.h>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    Human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << "Name of Human of " << name << endl;
        cout << "Age of the Human is " << age << endl;
    }
};

class Student : public Human
{
protected:
    int Roll_Number;
    int Fees;

public:
    Student(string name, int age, int Roll_Number, int Fees) : Human(name, age)

    {
        this->name = name;
        this->age = age;
        this->Roll_Number = Roll_Number;
        this->Fees = Fees;
    }

    void display()
    {
        cout << "Name of Student of " << name << endl;
        cout << "Age of the Student is " << age << endl;
        cout << "Roll_Number of Student of " << Roll_Number << endl;
        cout << "Fees of the Student is " << Fees << endl;
    }
};

int main()
{
    // Human H1("Aditya Singh", 20);
    // H1.display();
    Student S1("Dipu Singh", 20, 60, 50000);
    S1.display();
}


// Single Inheritance showing all code