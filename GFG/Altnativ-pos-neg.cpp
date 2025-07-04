#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {1,-2,2,3,-4,-5};
    vector<int>positive;
    vector<int>negative;
    
    for(int i = 0; i<7; i++)
    {
        if(arr[i] >0)
        {
            positive.push_back(arr[i]);
        }
        else
        {
            negative.push_back(arr[i]);
        }
    }
    
    vector<int>result;
    int i = 0;
    int j = 0;
    while(i<positive.size() && j<negative.size())
    {
        result.push_back(positive[i++]);
        result.push_back(negative[j++]);
    }
    
    for(int i =0; i<result.size(); i++)
    {
        cout<<result[i] <<" ";
    }
    
    // Wrost Case;
}