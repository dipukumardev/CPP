#include<iostream>
#include<array>
using namespace std;
int main(){
array<int , 4> a = { 1,2,5,6};
int size = a.size();
for(int i = 0; i<size; i++){
    cout<< "Elements of the Arrays:"<<a[i]<<endl;
}
cout<<endl;
cout<< "size of the Arrays:"<<size<<endl;
cout<<"Print the second position of the elements:"<< a.at(2)<<endl;
cout<<"This arrays is empty or not :"<< a.empty()<<endl; // 0 means false, 1 means ture;
}