#include<bits/stdc++.h>
using namespace std;

// Write the Functions code here;
string prefix(string str[] , int n)
{

    string ans = "";
    for(int i = 0; i<str[0].length(); i++)
    {
        char ch = str[0][i];
        bool match = true;

        for(int j = 1; j<n; j++)
        {
            if(str[j].size() < i || ch!= str[j][i])
            {
                match  = false;
                break;
            }
        }
        if(match == false)
        {
            break;
        }
        else{
            ans.push_back(ch);
        }
    }
    return ans;

}


int main()
{
    string str[] = {"Dipu" , "Dipu0" , "Dip"};
    int n = sizeof(str) / sizeof(str[0]);

    string prefix2  = prefix(str , n);
    cout<< prefix2 << endl;
    

}