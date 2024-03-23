#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    // 

    //  second method to make a vector with a elements;
    vector<int>a(5,1); // 5 means size of the vector; // 1 means all elements are the 1;
    cout<<"Print the a:"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;


    // 
    cout << "Capitcity of the vector :" << v.capacity() << endl;
    v.push_back(1);
    cout << "Capitcity of the vector :" << v.capacity() << endl;
    v.push_back(3);
    cout << "Capitcity of the vector :" << v.capacity() << endl;
    v.push_back(2);
    cout << "Capitcity of the vector :" << v.capacity() << endl;
    cout << "size of the vector:" << v.size() << endl;

    cout << "before pop_back" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back(); // pop elements are the remove the last elements of the vector , arrays etc;

    cout << "After bop_back" << endl;

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout<<"Clear the size before "<<v.size()<<endl;
    v.clear();
    cout<<"Clear the size After "<<v.size()<<endl;
}
