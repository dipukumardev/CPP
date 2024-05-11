#include<bits/stdc++.h>
using namespace std;
int& war(int a){
    int num = a;
    int& ans = num;
    return ans;
}
int main(){
int a = 5;
war(a);
}

// bad parctice 
// get let we can not access the memory 
// change by the any persone to face the problem;
