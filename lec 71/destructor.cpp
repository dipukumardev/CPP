#include <bits/stdc++.h>
using namespace std;

class branch
{
private:
    string name;
    int number;
    int *data;

public:
    // Create a Constructor;
    branch()
    {
        name = "Ritesh Singh";
        number = 89;
        data = new int;
        *data = 10;
        cout << "Call the Constructor:" << endl;
    }

    // Create the destructor;
    ~branch()
    {
        delete data;
        cout << "Call the Destructor:";
    }
};
int main()
{
    branch A1;
    cout << "Dipu kumar" << endl;
    return 0;
}