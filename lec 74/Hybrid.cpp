#include <iostream>
using namespace std;
// Make a Student class;
class Student
{
protected:
    string name;
    int age;

public:
    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void Dispaly_Student()
    {
        cout << "Name is the :" << name << " " << endl;
        cout << "Age is :" << age << " " << endl;
    }
};

// Crate a male class;

class Male
{
protected:
    int salary;
    int Muder;

public:
    Male(int salary, int Muder)
    {
        this->salary = salary;
        this->Muder = Muder;
    }

    void Display_Male()
    {
        cout << "Salary is :" << salary << " " << endl;
        cout << "Total Muder  is :" << Muder << " " << endl;
    }
};

// Create a Female class;

class Female
{
protected:
    int Mobile;
    string Addres; // do not ask both 🤣😂;

public:
    Female(int Mobile, string Addres)
    {
        this->Mobile = Mobile;
        this->Addres = Addres;
    }

    void Display_Female()
    {
        cout << "Mobile Numebr is :" << Mobile << " " << endl;
        cout << "Address is :" << Addres << " " << endl;
    }
};

// then main code fo the Hybrid Inherantane of the code;

// Create a Boy class it can INherantance the student and male ;

class Boy : public Student, public Male
{
protected:
    string Bike_name;

public:
    Boy(string name, int age, int salary, int Muder, string Bike_name) : Student(name, age), Male(salary, Muder)
    {
        this->Bike_name = Bike_name;
    }

    void Display_Boy()
    {
        cout << "Name is the :" << name << " " << endl;
        cout << "Age is :" << age << " " << endl;
        cout << "Salary is :" << salary << " " << endl;
        cout << "Total Muder  is :" << Muder << " " << endl;
        cout << "Bike name is :" << Bike_name << " " << endl;
    }
};

// Creating A Girl class;
class Girl : public Student, public Female
{
protected:
    string hair;

public:
    Girl(string name, int age, int Mobile, string Addres, string hair) : Student(name, age), Female(Mobile, Addres)
    {
        this->hair = hair;
    }

    void Display_Girl()
    {
        cout << "Name is the :" << name << " " << endl;
        cout << "Age is :" << age << " " << endl;
        cout << "Mobile Numebr is :" << Mobile << " " << endl;
        cout << "Address is :" << Addres << " " << endl;
        cout << "Hair is :" << hair << " " << endl;
    }
};

int main()
{
    Boy b1("Dipu kumar", 21, 500000, 3, "FZ3rd");
    Girl g1("Anshuka", 20,98,"Bihar", "Long");
    b1.Display_Boy();
    g1.Display_Girl();
}