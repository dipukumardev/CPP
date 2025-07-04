// Wrtie the code find the strign the Anagram or not;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string first = "dipukumar";
    string second = "dipuaumar";

    int sizefirst = first.length();
    int sizesecond = second.length();
    
    if(sizefirst != sizesecond)
    {
        cout<<"Not a Anagram String:";
        return 0;
    }

    sort(first.begin(), first.end());
    sort(second.begin(), second.end());

    if(first == second)
    {
        cout<<"Anagram Stirng";
    }
    else{
        cout<<"Not a Anagram Sting";
    }
}