

// Give two Arrays A && B compare the B all Elements present in the A where All Elements of B present in the A so give the 1;

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        bool found = false;

        for (int j = 0; j < 9; j++)
        {
            if (arr2[i] == arr[j])
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            found = false;
        }
        cout << found;
    }
}
