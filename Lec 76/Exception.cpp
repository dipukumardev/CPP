#include <iostream>
using namespace std;

// Create a Class name of Bank Costomer;

class Costomer
{
    string name;
    int balance;
    int Account_Number;

public:
    Costomer(string name, int balance, int Account_Number)
    {
        this->name = name;
        this->balance = balance;
        this->Account_Number = Account_Number;
    }

    // create a function of Deposit;

    void Deposti(int amount)
    {
        if (balance > 0)
        {
            balance += amount;
            cout << amount << " is Successful Creadit in Bank Accounts!" << endl;
        }
        else
        {
            throw "Amount shouid be Less than zero!";
        }
    }
    // Create a function of Withdrow;
    void Withdrow(int amount)
    {
        if (amount > 0 && balance >= amount)
        {
            balance -= amount;
            cout << amount << " is Successful Debit in Bank Accounts!" << endl;
        }
        else if (amount < 0)
        {
            throw "Amount shouid be Grater than  zero!";
        }
        else
        {
            throw "Your Balance is low!";
        }
    }
};
int main()
{
    Costomer C1("Dipu kumar", 9000, 94);

    try
    {
        C1.Deposti(100);
        C1.Withdrow(900000);
        C1.Deposti(100);// this line do not run because of throw direct get the catch line of code and miss the this line of code;
    }
    catch (const char *e)
    {
        cout << "Exception Occure:" << e << endl;
    }
    return 0;
}



// throw ka kaam hai Exception fakna;
// try is block of code that can handle the exception;
//catch ka kaam hia Exception of Catch karna or print the Exception;

// Imp: jab throw hota hai to nachi wala koi v statement run nahi hota hai;