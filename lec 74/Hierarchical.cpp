#include <bits/stdc++.h>
using namespace std;

// Create  A Parent class for the Hierachical Inherantince in the code;
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

    void Display_Human()
    {
        cout << "My Name is :" << name << " " << endl;
        cout << "Age is :" << age << " " << endl;
    }
};

// Create a Child Class of the Code so Inhirantance of the Element for the Human class;
class Student : public Human
{
protected:
    int Roll_Number;
    int fees;

public:
    Student(string name, int age, int Roll_Number, int fees) : Human(name, age)
    {
        this->Roll_Number = Roll_Number;
        this->fees = fees;
    }

    void Display_Student()
    {
        cout << "Name of the Student is :" << name << " " << endl;
        cout << "Age of Student is :" << age << " " << endl;
        cout << "Roll_Number is :" << Roll_Number << " " << endl;
        cout << "Fees of the Student is :" << fees << " " << endl;
    }
};

// Create an another Class Which name is Teacher it can also a child class of the Human Class;

class Teacher : public Human
{
protected:
    int Salary;
    string Subject;

public:
    Teacher(string name, int age, int Salary, string Subject) : Human(name, age)
    {
        this->name = name;
        this->age = age;
        this->Salary = 450000;
        this->Subject = "Software Eng";
    }

    void Display_Teacher()
    {
        cout << "Name of Teacher is :" << name << " " << endl;
        cout << "Age of Teacher is :" << age << " " << endl;
        cout << "Salary of Teacher si " << Salary << " " << endl;
        cout << "Subject of Teacher si " << Subject << " " << endl;
    }
};
// Start a main function;
int main()
{
    Student S1("dipu", 21, 60, 34);
    Teacher T1("Aditya", 28, 450000, "Ganster");
    S1.Display_Student();
    T1.Display_Teacher();
}