// find the factorial of the numbers;

// two way to find the factorial of a  number;

// 1.>
/*

include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the number:";
    cin>>N;
    int fact = 1;

    for(int i = 1; i<=N; i++)
    {
        fact = fact * i;
    }
    cout<<"Factorial of the number is :" << fact<<" ";
}


*/

// 2nd way to solve the factorali of the a number;

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cout << "Enter the Number of the factorial:";
    cin >> N;

    vector<int> ans(1, 1);

    while (N > 1)
    {
        int carry = 0;
        int res;
        int size = ans.size();

        for (int i = 0; i < size; i++)
        {
            res = ans[i] * N + carry;
            ans[i] = res % 10;
            carry = res / 10;
        }
        while (carry)
        {
            ans.push_back(carry % 10);
            carry = carry / 10;
        }
        N--;
    }
    reverse(ans.begin(), ans.end());
    cout << "Factorial of the number is: ";
    for (int digit : ans)
    {
        cout << digit;
    }
    cout << endl;

    return 0;
}