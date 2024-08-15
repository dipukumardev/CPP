#include <bits/stdc++.h>
using namespace std;
// find the size of the class;
class size
{
    char c;
    int d;
    // answer is 8 byte
    // c # # # d d d d; outpur # is a empty or padding in cpp;
};

class size2{
    char c;
    char a;
    int d;
    //answer is 8byte;
    // c c # # d d d d 
};

class size3{
    char c;
    int b;
    char v;
    //answer is 12;
    // c # # # b b b b v # # #
};

int main()
{

    cout<<sizeof(size)<<endl;
    cout<<sizeof(size2)<<endl;
    cout<<sizeof(size3)<<endl;
}