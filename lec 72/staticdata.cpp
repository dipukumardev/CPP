#include <bits/stdc++.h>
using namespace std;
class Costomer
{
    string Name;
    int Account_Number;
    int Balance;
    // static data keyword user to static data member;

    static int total_user;

public:
    Costomer(string Name, int Account_Number, int Balance)
    {
        this->Name = Name;
        this->Account_Number = Account_Number;
        this->Balance = Balance;
        total_user++;
    }

    void display()
    {
        cout << "Name of Costomer is:" << Name << endl;
        cout << "Account_Number of Costomer:" << Account_Number << endl;
        cout << "Balance of the Costomer is :" << Balance << endl;
        // a singhle line to print the bank how many accout|| users;
        // cout << "Total Costome in bake:" << total_user << endl;
    }

    // Also can use the different function to print the total costome;
    void display_total_costomer()
    {
        cout << "total Costomer bank is  :" << total_user << endl;
    }
};
int Costomer::total_user = 0;
int main()
{
    Costomer A1("Ritesh Singh", 1, 1000);
    Costomer A2("Dipu kumar", 2, 100);
    Costomer A3("Aditya Singh", 3, 3000);
    A1.display();
    A2.display();
    A2.display_total_costomer();
    A3.display();
}