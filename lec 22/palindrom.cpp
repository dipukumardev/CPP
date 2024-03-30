#include <bits/stdc++.h>
using namespace std;

// write a function to find the palindrom string;
bool palindrom(char ch[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        if (ch[start] != ch[end])
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}

// find the length of the string;
int len(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char ch[10];
    cout << "Enter the ch:" << endl;
    cin >> ch;
    cout << " Your Name is " << ch << endl;
    cout << "Lenght of you name:" << len(ch)<<endl;
    int full = len(ch);
    cout << "string are palindrom yes or not :" << palindrom(ch, full);
}