#include<bits/stdc++.h>
using namespace std;
void update(int a){
    a++;
}

// create a different function and create refrance variable;
void update2(int& a){
    a++;
}
int main(){

    // Thats the way to create a refrance varible;
//     int i = 5;
//     int& j = i;
//     cout<<j<< endl;
//     i++;
//     cout<<j;



//  we get the same the before and after output;
int a = 6;
cout<<"befor the call the function"<< a << endl;

update(a);

cout<<"After the call the function"<< a <<endl;


// call the second function that can ref;

update2(a);
cout<< a; // this guy get the 7 ;

// due to the pass by value is always a copy;




}

//  refrance variable do not create other memeory it can same memory;
// pass by refrance 


// pass by value := it can take a copy and create a new memory location;
// pass by refrance:= it can take a same memory location and update it; it can create a new name;
// memory same but name is different in the case of pass by refrance; 




