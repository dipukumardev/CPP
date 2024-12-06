// when user give the integer so give the output is how many inter present them.

#include <bits/stdc++.h>
using namespace std;
int countdigit(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        cnt = cnt + 1;
        n = n / 10;
    }
    return cnt;
}
int main()
{
    int n;
    cout << "Enter the Value of the N:";
    cin >> n;
    int digit = countdigit(n);
    cout << "Total Number integer is N:" << digit;
}