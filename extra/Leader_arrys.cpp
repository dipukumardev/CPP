#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> ans;
    int n;
    cout << "Enter the Size of the Arrays:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        bool leader = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                leader = false;
                break;
            }
        }
        if (leader == true)
        {
            ans.push_back(arr[i]);
        }

    }
        int m = ans.size();
        for (int i = 0; i < m; i++)
        {
            cout << ans[i]<<" ";
        }
}