#include<bits/stdc++.h>
using namespace std;
int main()
{
    string address = "1.1.1.1";
    int index = 0;
    string ans;
    while(index < address.size())
    {
        if(address[index] == '.')
        {
            ans = ans + "[.]";
        }
        else
        {
            ans = ans + address[index];
        }
            index++;
    }
    cout<< ans;
}



// when come . when put in the [.];