#include <bits/stdc++.h>
using namespace std;
class costomer
{
private:
    string name;
    string address;
    int AccontNumber;

    // constructor
public:
    costomer(string a, string b, int c)
    {
        name = a;
        address = b;
        AccontNumber = c;
    }

    // print function; function to display data of constructor;
    void display()
    {
        cout << "Name: " << name << " " << endl;
        cout << "Address: " << address << " " << endl;
        cout << "AccountNumber: " << AccontNumber << " " << endl;
    }

    // make a copy constructor;

    costomer(costomer &B)
    {
        name = B.name;
        address = B.address;
        AccontNumber = B.AccontNumber;
    }
};

int main()
{
    costomer A1("Dipu Kumar", "Bhopal, MP", 123);
    A1.display();

    //    Make a copy constructor;
    cout << "Copy Constructor Data in Belo:" << endl;
    costomer A2(A1);
    A2.display();
    return 0;
}