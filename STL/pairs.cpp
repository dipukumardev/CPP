#include <bits/stdc++.h>
using namespace std;
// one paris in the functions;
int pairsfind()
{
    pair<int, int> p = {1, 4};
    cout << p.first << " " << p.second;
    cout << endl;
}

// write a functions in the paris;
int multiplepairs()
{

    // multiple pairs in the function;
    pair<int, pair<int, int>> p2 = {2, {4, 6}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second;
    cout << endl;
}

// How to write a arrays in the paris;
int arrayspairs()
{
    pair<int, int> arr[] = {{1, 3}, {4, 5}, {8, 9}, {12, 87}};
    cout << arr[0].first;
}

int main()
{

    // function call;
    pairsfind();
    multiplepairs();
    arrayspairs();
}

// utlity library 