#include <iostream>
using namespace std;

// Write the Multilevel Inheritance in the code;
class person
{
protected:
    string name;
    int age;

public:
    person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << "Name is :" << name << endl;
        cout << "Age is : " << age << endl;
    }
};

class Staff : public person
{
protected:
    int salary;

public:
    Staff(string name, int age, int salary) : person(name, age)
    {
        this->salary = salary;
    }

    void display()
    {
        cout << "Name is :" << name << endl;
        cout << "Age is :" << age << endl;
        cout << "Salary is :" << salary << endl;
    }
};

class Manage : public Staff
{
protected:
    string Depatment;
    int Number_staff;

public:
    Manage(string name, int age, int salary, string depatment, int Number_staff) : Staff(name, age, salary)
    {
        this->Depatment = Depatment;
        this->Number_staff = Number_staff;
    }

    void display()
    {
        cout << "Name is :" << name << endl;
        cout << "Age is :" << age << endl;
        cout << "Salary is :" << salary << endl;
        cout << "Deparment is :" << Depatment << endl;
        cout << "Number_staff is " << Number_staff << endl;
    }
};
int main()
{
    person p1("Dipu kumar", 23);
    p1.display();

    Staff s1("Ritesh Singh", 25, 300);
    s1.display();

    Manage m1("Aditya Singh", 21, 20000, "Ganster", 500000);
    m1.display();
}