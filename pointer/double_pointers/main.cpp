#include <iostream>
using namespace std;
int main()
{
    int i = 7;
    int *prt = &i;
    int **prt2 = &prt;
    cout<<"print the value of the prt:"<< prt <<endl;
    cout<<"Print the address of the prt is :" << prt2;
}