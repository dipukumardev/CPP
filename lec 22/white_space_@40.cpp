#include<bits/stdc++.h>
using namespace std;
// write a function to find the whitespace to add the @40 in the white space in string;
string whitespace(string name){
    string temp = " ";
    for(int i = 0; i<name.length(); i++){
        if(name[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(name[i]);
        }
    }
    return temp;
}



int main(){
    string name ;
    cout<<"Enter your string:";
    getline(cin,name);
    string final = whitespace(name);
    cout<<final;
}