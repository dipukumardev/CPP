#include<iostream>
using namespace std;
// write a function to convert the cpaital letter to small letters;
char tolowercase(char ch){
    if(ch>='a' && 'z'){
        return ch;
    }
    else{
        char tem = ch - 'A' + 'a';
        return tem;
    }
}
int main(){
    char ch;
    cout<<"Enter the ch:";
    cin>>ch;
    cout<<"Convert the capital to small"<<tolowercase(ch);
}