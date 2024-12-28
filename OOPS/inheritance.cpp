#include<bits/stdc++.h>
using namespace std;
class inhertance
{
    public:
    string name;
    int age;
    
    //create a consterter;
    // inhertance(string name, int age)
    // {
    //     this->name = name;
    //     this->age = age;
    // }
    
    // non-perametrize constructor;
    inhertance()
    {
        
    }
};


// create a second class 
class student:public inhertance
{
    public:
    int rollno;
    
    
    // make a method, member functions;
    void getfunction()
    {
        cout<<"Name   "<<name<<endl;
        cout<<"Age    " << age<<endl;
        cout<<"Rollno " << rollno;
    }
};
int main()
{
    student s1;
    s1.name = "Dipu Singh";
    s1.age = 24;
    s1.rollno = 11234;
    
    s1.getfunction();
    return 0;
}