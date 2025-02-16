#include <iostream>
using namespace std;
// Function Overloding

class Area
{
public:
    int CalculateArea(int r) // Circle Aree
    {
        return 3.14 * r * r;
    }

    int CalculateArea(int l, int b)
    {
        return l * b;
    }
};
int main()
{
    Area a1, a2;
    cout <<"Area of Circle is : " <<a1.CalculateArea(4) << endl;
    cout <<"Area of Rectangle is : " <<a2.CalculateArea(4, 3);
}

// Function overloding;

// Define:- When Create a Class and make a two function in same name but different parameter and call in main function that know as the function Overloding;