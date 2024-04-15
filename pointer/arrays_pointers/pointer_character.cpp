#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 4, 5, 6};
    char ch[6] = "abcde";
    cout << arr << endl;
    cout << ch << endl;

    // make a pointer of c;
    char *c = &ch[0];
    // it can not give the address it can print the full strings;
    cout<< c;



    char temp = 'z';
    char *j = &temp;
    cout<< j;
}