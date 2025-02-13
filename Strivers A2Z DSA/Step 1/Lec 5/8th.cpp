#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }

        long rev = 0;
        int digit;
        int temp = x;
        while (x != 0)
        {
            digit = x % 10;
            rev = rev * 10 + digit;
            x = x / 10;
        }
        if (temp == rev)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    int number = 123;
    Solution obj;                           
    bool result = obj.isPalindrome(number); 

    if (result)
        cout << number << " is a palindrome." << endl;
    else
        cout << number << " is not a palindrome." << endl;

    return 0;
}