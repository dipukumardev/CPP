#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1,3,4,56,5};
    cout<<arr + 1; // formula use : ith index address = Base Address +  i * datasize(int,char);
}


// print the value;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7] = {1,3,5,6,78,8,8};
    cout<< *(arr + 3);
}


// print the value and the address ;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1,3,4,5,7};
    int *prt = &arr[1];
    cout<<prt <<endl;
    cout<< *prt;
}


// print the all value of the arrray;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1,4,54,6,67};
    for(int i = 0; i<5; i++)
    {
        cout<< *(arr + i)<<" ";
    }
}


// print the all Address of the arrays;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1,3,4,6,7};
    int *ptr = &arr[0];
    for(int i =0; i<5; i++)
    {
        cout<<ptr << " ";
    }
}