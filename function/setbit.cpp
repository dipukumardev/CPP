//  to find the total number of set bit;
#include<iostream>
using namespace std;
int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
int main(){
    int a = 10;
    int b = 15;
    int acoutsetbit = countSetBits(a);
    int bcoutsetbit = countSetBits(b);
    cout<<acoutsetbit;
    cout<<bcoutsetbit;
    
}