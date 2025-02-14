#include <bits/stdc++.h>
using namespace std;

// Engineer class
class Engineer
{
protected:
    string Specification;

public:
    Engineer(string Specification)
    {
        this->Specification = Specification;
    }

    void showSpecification()
    {
        cout << "My Specification is: " << Specification << endl;
    }
};

// Businessman class
class Businessman
{
protected:
    int Employ;

public:
    Businessman(int Employ)
    {
        this->Employ = Employ;
    }

    void showWorkers()
    {
        cout << "Number of workers in the business: " << Employ << endl;
    }
};

// Job class
class Job
{
protected:
    int salary;

public:
    Job(int salary)
    {
        this->salary = salary;
    }

    void showSalary()
    {
        cout << "Job Salary is: " << salary << endl;
    }
};

// Multiple Inheritance
class Student : public Engineer, public Businessman, public Job
{
public:
    string name;

    Student(string name, string Specification, int Employ, int salary)
        : Engineer(Specification), Businessman(Employ), Job(salary) // ✅ Correct initialization
    {
        this->name = name;
    }

    void Display()
    {
        cout << "Name: " << name << endl;
        showSpecification();
        showWorkers();
        showSalary();
    }
};

int main()
{
    Student S1("Dipu Kumar", "B.Tech (CSE)", 66, 456);
    S1.Display();
    return 0;
}
