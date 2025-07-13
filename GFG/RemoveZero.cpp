#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
    vector<int> ans;
    vector<int> uparr;
    int s = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < s; i++)
    {
        if (arr[i] == 0)
        {
            ans.push_back(arr[i]);
        }
        else
        {
            uparr.push_back(arr[i] + 1);
        }
    }

    // Printing the all Elemnt in the old arr name;
    cout<<"Orignal Arrays Elements: ";
    for(int i=0 ; i<uparr.size(); i++)
    {
        cout<<uparr[i] << " ";
    }

    // Printing the how many zeros in the arrs;

    for(int i = 0; i<ans.size(); i++)
    {
        cout<<ans[i] << " ";
    }

    return 0;
}


//  2nd way to solve this questions:

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    vector<int> ans;
    for(int i =0; i<arr.size(); i++)
    {
        if(arr[i] == 0)
        {
            ans.push_back(arr[i]);
        }
    }

    for(int i = 0; i<arr.size(); i++)
    {
        if(arr[i] != 0)
        {
            ans.push_back(arr[i]);
        }
    }

    // Printing the all Elemetn first zero and than elements;
    for(int i = 0; i<ans.size(); i++)
    {
        cout<<ans[i] <<" ";
    }
    return 0;
}