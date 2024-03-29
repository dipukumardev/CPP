#include<iostream>
using namespace std;
int main(){
    char name[20]; // when you enter name between space they break the eg: dipu kumar print the only(dipu); dipukumar(then print dipukuamr);
    cout<<"Enter your name:"<<endl;
    cin>>name;
    cout<<"Your name is "<<name;
}