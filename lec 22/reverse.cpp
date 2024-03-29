#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// making a function to reverse char;
void reverse(char name[], int size)
{
    int s = 0;
    int e = size - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}
// write a function to print the length of the char;
int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char ch[10];
    cout << "Enter you name:";
    cin >> ch;
    cout << "Your name is :" << ch << endl;
    int len = getlength(ch);
    cout << len;
    reverse(ch,len);
    cout<< ch;
}