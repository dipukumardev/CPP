#include<bits/stdc++.h>
using namespace std;

class student 
{
    public:
    string name;
    int age;
    int roll_number;
    string grade;
};
int main()
{
    student *s = new student;

    (*s).name ="Ritesh Singh";
    (*s).age = 23;
    (*s).roll_number = 23;
    (*s).grade = "A+";


    // Print the name;

    cout<<s->name<<" ";
    cout<<s->age<<" ";
    cout<<s->roll_number<<" ";
    cout<<s->grade<<" ";

}