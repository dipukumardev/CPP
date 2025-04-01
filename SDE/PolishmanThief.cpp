// Given an arrays fo size n that has the folling specifincatios:
// 1. Each element in the array contains either a policeman or a Thief;
// 2. Each Polishman can catch only one thief;
// 3. A Polishman can not catch a thief who is more that K units away from th polishman;
// find the maximum number of thieves that can be caught.

// eg:- {'p', 't', 'p', 't', 't'};
// ans is :- 1;

// Brust Froce approch; // Some Error in the understanding the problem;
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[5] = {'p', 't', 'p', 't', 't'};
    int PolishMan = 0;
    int Theif = 0;
    int k = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == 'p')
        {
            PolishMan++;
        }
        else
        {
            Theif++;
        }
    }
    k = Theif - PolishMan;
    cout << k;
}