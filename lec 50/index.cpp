//  Dynamic Memory Allocation of 2D and 3D Arrays in C++;

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "Ente the Value of the Row and Colume:";
    cin >> n >> m;
    int **prt = new int *[n];

    // Create the 2D arrays;

    for (int i = 0; i < n; i++)
    {
        prt[i] = new int[m];
    }

    // get the input form the user in the in the 2D arrays:

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> prt[i][j];
        }
    }

    cout << endl;
    // Print the value of the 2D arrays:

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << prt[i][j] <<" ";
        }
            cout<<endl;
    }

    // Relese the Memory;

    for (int i = 0; i < n; i++)
    {
        delete[] prt[i];
    }

    delete[] prt;
}