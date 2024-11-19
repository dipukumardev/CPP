#include<bits/stdc++.h>
using namespace std;
void fun3(int i)
{
    if(i==0)
    {
        cout<<"Happy birthday Mith jee:";
        return;
    }
    else if(i>0)
    {
        cout<<i<<" "<<"Days Left for the birthdays:"<<endl;
    }
    fun3(i-1);
}
int main()
{
    int i;
    cout<<"Enter the days left for Birthdays:";
    cin>>i;
    fun3(i);
}