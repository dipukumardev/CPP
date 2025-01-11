// Square Root

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Value of the N:";
    cin >> n;

    int ans = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i * i <= n)
        {
            ans = i;
        }
        else
        {
            break;
        }
    }

    cout <<"Square Number is: " <<ans;
}