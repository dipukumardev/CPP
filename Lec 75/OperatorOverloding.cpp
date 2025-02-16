#include <iostream>
using namespace std;

// Operator Overloding

class Complex
{
    int Real;
    int Img;

public:
    // First Errro when i run the code;

    Complex() {

    };
    Complex(int Real, int Img)
    {
        this->Real = Real;
        this->Img = Img;
    }

    void Display()
    {
        cout << Real << " +i " << Img << endl;
    }

    // Main Code of the Operator Overloding ;

    Complex operator+(Complex &c)
    {
        Complex ans;
        ans.Real = Real + c.Real;
        ans.Img = Img + c.Img;
        return ans;
    }
};
int main()
{
    Complex c1(7, 5);
    Complex c2(6, 3);
    Complex c3 = c1 + c2;
    c3.Display();
}


// Operatro Overloding:- undrestand in the code;