// print the ptr and arrays of c than see what is the answer;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[6] = "abcde";
    char *ptr = c;
    cout<<c <<endl; // both lines of cout is print the vlaue of the c, or ptr when its teld ot null characters;
    cout<<ptr;
}



// How to print the address in the charater typpe in th earrays;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[6] = "abcde";
    char *ptr = c;
    cout<<(void*)c; 
    cout<<(void*)ptr;
}
//  void denote the position but his do not find which type of data are pregent;


// how to increment the value of the value of the help of the pointer;


#include<bits/stdc++.h>
using namespace std;

void incre_rol(int *roll)
{
    *roll = *roll + 4;
}
int main()
{
    int roll_number = 60;
    // when dipu copmplet the 1st years so some student come laterl admission so incre ther roll number with 4;
    // with help of the pointer;

    incre_rol(&roll_number);
    cout<<roll_number;
    return 0;
    // solve it ;
}