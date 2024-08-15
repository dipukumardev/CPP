#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int age;
    int roll_number;
    string grade;
};
int main()
{
    Student *s = new Student;

    (*s).name = "Dipu kumar";
    (*s).age = 20;
    (*s).roll_number = 60;
    (*s).grade = "A+";

    // print the value;
    cout<<s->name<<endl;
    cout<<s->age<<endl;
    cout<<s->roll_number<<endl;
    cout<<s->grade<<endl;
}