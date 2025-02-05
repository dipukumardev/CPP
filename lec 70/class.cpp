#include <bits/stdc++.h>
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
    student s1;
    s1.name = "Dipu";
    s1.age = 20;
    s1.roll_number = 22;
    s1.grade = "A+";

    cout << "s1 student name: " << s1.name << " " << endl;

    student s2;
    s2.name = "Ritesh Singh";
    s2.age = 26;
    s2.roll_number = 23;
    s2.grade = "A++";

    cout << "s2 student grade: " << s2.grade << " ";
}
