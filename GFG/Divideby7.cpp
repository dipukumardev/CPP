#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word = "78";
    int ans = stol(word);
    if(ans%7 == 0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}