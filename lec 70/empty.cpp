// 1st Normal class and find the size;

#include <bits/stdc++.h>
using namespace std;

class student
{
    int a;
    int b;
    int c;
};
int main()
{
    student obj;
    cout << sizeof(obj);
}

// output is 12 is correct



// 2nd problem is empty class why alwalys get 1 ans;

#include <bits/stdc++.h>
using namespace std;

class student
{

    // When empty class is bydefult 1 size why

    // Object identity must be preserved.
    // Memory alignment and padding are required.
    // Inheritance must avoid undefined behavior.
};
int main()
{
    student obj;
    cout << sizeof(obj);
}




// 3rd problem is when one is int and sencde is char so answer is 8 but 4 +1  = 5 so why get the ans is 8;

#include<bits/stdc++.h>
using namespace std;

class student 
{
    int a;
    char b;


    // answer is below"👇;
    // _______________________
    // a| a| a| a| b|* | *| *| 
    // _______________________

    // that's know as padding concepts;
    // segnmet mai data ko read karta hai 32bit or 64bit processor;
    // 1byte 2,4,8 sab aanay multipule mai memory allocate hota hai;
};
int main()
{
    student obj;
    cout<<sizeof(obj);
}





// 4th when char , int char; what the ans;

#include<bits/stdc++.h>
using namespace std;

class student 
{
   char a;
   int b;
   char c;


//    ans is 12byte;
};
int main()
{
    student obj;
    cout<<sizeof(obj);
}