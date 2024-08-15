#include<bits/stdc++.h>
using namespace std;
int main()
{
    string d = "dipu";
    int n = d.size() -1;
    int start = 0; 
    int end = n;
    while(start<end)
    {
        swap(d[start], d[end]);
        start++;
        end--;
    }
    cout<<d;
}