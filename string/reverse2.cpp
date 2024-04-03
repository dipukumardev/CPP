#include<bits/stdc++.h>
using namespace std;
// string revese(string str){
//     for(int i = 0; i<str.length(); i++){
//         swap(str.begin(), str.end());
//     }
//     return str;
// }
//  this code write by the gpt;
string revese(string str){
    int n = str.length();
    for(int i = 0; i < n/2; i++){
        swap(str[i], str[n-i-1]);
    }
    return str;
}
int main(){
    string str = "dipu kumar";
    string str2 = revese(str);
    cout<<str2;
}