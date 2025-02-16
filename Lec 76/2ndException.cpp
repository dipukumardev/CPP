#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cout << "Ente the value of a and b:";
    cin >> a >> b;

    try
    {
        if (b == 0)
        {
            throw "Divides is not possible!";
        }
        int c = a / b;
        cout << c;
    }
    catch (const char *e)
    {
        cout << "Exception Occura:" << e << endl;
    }
}