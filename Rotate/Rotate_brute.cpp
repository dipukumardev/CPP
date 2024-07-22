#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// making a fundtion that rotate the arrays;

void leftrotate(int arr[], int n, int d)
{
    d = d % n;

    // make a tmep arrays;
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    // a head the back elements;
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }

    // then puting the temp elm in the last;
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
    }
}
int main()
{
    // get the how many elements present the arrays;
    int n;
    cout << "Enter the element of the n:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // how many elment put in the left;
    int d;
    cout << "Enter the elments of the d:";
    cin >> d;
    leftrotate(arr, n, d);

    // printing the arrayswhen remove the arrays;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// solvig the same question with the help of class and best solutions;

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(int arr[], int n, int d)
    {
        reverse(arr, arr + d);
        reverse(arr + d, arr + n);
        reverse(arr, arr + n);
    }
};
int main()
{
    int n, d;
    cout << "Enter the value of the n :";
    cin >> n;
    int arr[n];
    cout << "Entet the number how elements are rotate:";
    cin>>d;
    // Enter the elements of the arrays:
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution sol;
    sol.rotate(arr, n, d);

    // print the arrays;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}




//  solve the again;

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void rotated(int arr[], int n, int d)
    {
        reverse(arr, arr+d);
        reverse(arr + d, arr + n);
        reverse(arr, arr+ n);
    }
};


int main()
{
    int n, d;
    cout<<"Enter the how many elemets are present in the Array:";
    cin>>n;
    cout<<"Enter the number the how many elements are Rotated:";
    cin>>d;

    // Declear the arrays:
    int arr[n];

    // get the elements of the user:
    
    for(int i = 0; i< n; i++)
    {
        cin>>arr[i];
    }

    Solution sol;
    sol.rotated(arr, n, d);


    // pritn the arrays which are reverse:
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i] <<" ";
    }
}