#include<iostream>
using namespace std;
int reverse( int number){
    int ans =0;
    while (number!=0)
    {
        int digit = number%10;
        ans = (ans * 10) + digit;
        number = number/10;
    }
    return ans;
}
int main(){
   int final_ans =  reverse(123);
   cout<<final_ans;
}