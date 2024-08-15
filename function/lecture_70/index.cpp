#include <bits/stdc++.h>
using namespace std;

// student class 
class student
{
    string name;
    int age, roll_number;
    string grade;

    // Setter and getter function;

    // 1. to Setter function use to set the value in the class;
public:
    void setname(string s)
    {
        name = s;
    }
    void setage(int a)
    {
        age = a;
    }
    void set_roll_number(int roll)
    {
        roll_number = roll;
    }
    void setgrade(string gr)
    {
        grade = gr;
    }

    // print the value of the attributs of the class;
    void getname()
    {
        cout<<name<<endl;
    }
};

int main()
{

    // Basic info of class and object;

    student s1;
    s1.name = "Dipu kumar";
    s1.age = 20;
    s1.roll_number = 22;
    s1.grade = "A+";

    cout << s1.name<<endl;

    student s2;
    s2.name = "Aditya Singh";
    s2.age = 21;
    s2.roll_number = 1;
    s2.grade = "A";

    cout<<s2.grade;

    // some intermedium class and object || set the attributs by the help of the funcitons;

    student s1;
    s1.setname("dipu kumar");
    s1.setage(21);
    s1.setgrade("A+");
    s1.set_roll_number(22);

    // print the value of the class;
    s1.getname();

    

}