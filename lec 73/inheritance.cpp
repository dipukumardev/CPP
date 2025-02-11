#include <bits/stdc++.h>
using namespace std;

class Humans
{
protected:
    string Name;
    int age;
    int weight;
};

class Student : private Humans
{
private:
    int Roll_Number;
    int Fees;

public:
    Student(string Name, int age, int weight, int Roll_Number, int Fees)
    {
        this->Name = Name;
        this->age = age;
        this->weight = weight;
        this->Roll_Number = Roll_Number;
        this->Fees = Fees;
    }

    void display_student_details()
    {
        cout << "Name of Student is :" << Name << endl;
        cout << "Age of Student is : " << age << endl;
        cout << "Weight of Student is " << weight << endl;
        cout << "Roll_Number of Student is " << Roll_Number << endl;
        cout << "Fees of Student is " << Fees << endl;
    }
};

class Teacher : private Humans
{
private:
    int Salary;
    int Teacher_id;

public:
    Teacher(string Name, int age, int weight, int Salary, int Teacher_id)
    {
        this->Name = Name;
        this->age = age;
        this->weight = weight;
        this->Salary = Salary;
        this->Teacher_id = Teacher_id;
    }

    void display_techer_details()
    {
        cout << "Name of the Teacher:" << Name << endl;
        cout << "Age of The Teacher:" << age << endl;
        cout << "Weight of the Teacher: " << weight << endl;
        cout << "Salary of the Teacher:" << Salary << endl;
        cout << "Teacher id of the Teacher:" << Teacher_id;
    }
};
int main()
{
    Student S1("Ritesh Singh", 28, 54, 32, 25000);
    S1.display_student_details();
    Teacher T1("Aditya Singh", 26, 50, 43, 45000);
    T1.display_techer_details();
}