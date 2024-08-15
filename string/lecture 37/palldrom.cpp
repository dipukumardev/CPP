// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string d = "dipu";
//     int start = 0;
//     int end = d.size() -1;
//     while(start<end)
//     {
//         if(d[start] != d[end])
//         {
//             cout<<"not a palldrom";
//             return 0;
//         }
//        start++;
//        end--;
//     }
//     cout<<"is a palldrom string";
// }





// second way to find the palldrom string:

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the s string:";
    getline(cin, s);
    int n = s.size() -1;
    int start = 0;
    int end = n;
    while(start<end)
    
    {
        if(s[start] != s[end])
        {
            cout<<"Not palldrome string;";
            return 0;
        }
        start++;
        end--;
    }
    
    cout<<"palldrome string:";
}