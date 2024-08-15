#include<bits/stdc++.h>
using namespace std;
int main()
{
    string num1 = "123";
    string num2 = "3";
    
    // find the size;
    int index1 = num1.size()-1;
    int index2 = num2.size()-1;
    string ans;
    int carry = 0;
    int sum;
    
    while(index2>=0)
    {
        sum = (num1[index1] - '0') + (num2[index2] -'0') + carry;
        carry = sum/10;
        char c = '0' + sum % 10;
        ans +=c;
        index2--;
        index1--;
    }
    // End of the first while loops;
    while(index1>=0)
    {
        sum = (num1[index1] -'0') + carry;
        carry = sum/10;
        char c = '0' + sum % 10;
        ans +=c;
        index1--;
    }
    reverse(ans.begin(), ans.end());
    cout<<"Sum of two string is:"<<ans;
}