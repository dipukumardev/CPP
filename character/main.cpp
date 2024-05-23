#include<iostream>
using namespace std;

// making a function which can convert the 'a' to 'A';

char convert(char ch){
    char ans = ch - 'a' + 'A';
    return ans;
}

int main(){
    char ch;
    cout<<"Enter the character:";
    cin>> ch;
    cout<<convert(ch);
}