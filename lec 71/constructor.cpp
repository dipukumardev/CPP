
// // How to define the constructor in the cpp

#include <bits/stdc++.h>
using namespace std;

class constructor
{
private:
    /* data */
    string name;
    string Address;
    long long Mobile_number;
    int Balance;

public:
    constructor(string a, string b, long long c, int d)
    {
        name = a;
        Address = b;
        Mobile_number = c;
        Balance = d;
    }

    // Function to display data
    void printDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << Address << endl;
        cout << "Mobile Number: " << Mobile_number << endl;
        cout << "Balance: " << Balance << endl;
    }
};

int main()
{
    constructor A1("Ritesh Singh", "Mithapur busstand Patna, Bihar", 7870655593, 10);
    A1.printDetails();
}

// #include <bits/stdc++.h>
// using namespace std;

// class Person
// {
// private:
//     string name;
//     string address;
//     long long mobile_number;
//     int balance;

// public:
//     // Constructor
//     Person(string a, string b, long long c, int d)
//     {
//         name = a;
//         address = b;
//         mobile_number = c;
//         balance = d;
//     }

//     // Function to print details
//     void printDetails()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Address: " << address << endl;
//         cout << "Mobile Number: " << mobile_number << endl;
//         cout << "Balance: " << balance << endl;
//     }
// };

// int main()
// {
//     // Creating an object
//     Person A1("Ritesh Singh", "Mithapur busstand Patna, Bihar", 7870655599, 10);

//     // Calling function to print details
//     A1.printDetails();

//     return 0;
// }
