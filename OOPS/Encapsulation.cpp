#include<bits/stdc++.h>
using namespace std;
// Define a Class
class Teacher{
    
    // Access Modifiers;
    private:
    double Balance;
    
    public:
    string name;
    string lastname;
    int age;
    
    // Method and Member Functions;
    void Changename(string newname)
    {
        name = newname;
    }
    
    
    // Setter funciton(to the set the value of the private Modifiers);
    void setvalue(double s)
    {
        Balance = s;
    }
    
    // Getter functions ( Get the value of the Private Modifiers);
    double getvalue()
    {
        return Balance;
    }
};

int main()
{
    Teacher t1;
    t1.name = "Dipu Singh";
    t1.setvalue(25000);
    cout<<t1.name <<endl;
    cout<<t1.getvalue();
}