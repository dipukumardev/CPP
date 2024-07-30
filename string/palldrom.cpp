#include<bits/stdc++.h>
using namespace std;
int main()
{
    string d = "dipu";
    int start = 0;
    int end = d.size() -1;
    while(start<end)
    {
        if(d[start] != d[end])
        {
            cout<<"not a palldrom";
            return 0;
        }
       start++;
       end--;
    }
    cout<<"is a palldrom string";
}