// #include <bits/stdc++.h>
// using namespace std;
// class student
// {
// public:
//     string name;
//     int age;
//     int roll_number;
//     string grade;
// };
// int main()
// {
//     student s1;
//     s1.name = "Dipu";
//     s1.age = 20;
//     s1.roll_number = 22;
//     s1.grade = "A+";

//     cout << "s1 student name: " << s1.name << " " << endl;

//     student s2;
//     s2.name = "Ritesh Singh";
//     s2.age = 26;
//     s2.roll_number = 23;
//     s2.grade = "A++";

//     cout << "s2 student grade: " << s2.grade << " ";
// }




#include<bits/stdc++.h>
using namespace std;

class student 
{
    string name;
    string grade;
    int age;
    int roll_number;

    // how to access the private to the help of function;

    public:
  void setname(string n)
    {
        name = n;
    }

    void setgrade(string g)
    {
        grade = g;
    }

    void setage(int a)
    {
        age = a;
    }
    
    void setroll_number(int r)
    {
        roll_number = r;
    }
    
    








    void getname()
    {
        cout<<name <<endl;
    }

    void getgrade()
    {
        cout<<grade <<endl;
    }
    void getage()
    {
        cout<<age <<endl;
    }
    void getnroll_number()
    {
        cout<<roll_number <<endl;
    }
};
int main()
{
    student s1;
    s1.setname("Dipu kumar");
    s1.setage(22);
    s1.setgrade("A+");
    s1.setroll_number(21);

    s1.getname();
    s1.getage();
    s1.getgrade();
    s1.getnroll_number();
}