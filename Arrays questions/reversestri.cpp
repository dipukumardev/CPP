#include <iostream>
#include <algorithm> // use the reverse function;
#include <string>
using namespace std;
int main()
{
    string str = "hell world";
    reverse(str.begin(), str.end());
    cout << str;
}
