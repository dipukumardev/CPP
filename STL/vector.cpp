// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v;

//     //

//     //  second method to make a vector with a elements;
//     vector<int>a(5,1); // 5 means size of the vector; // 1 means all elements are the 1;
//     cout<<"Print the a:"<<endl;
//     for(int i:a){
//         cout<<i<<" ";
//     }cout<<endl;

//     //
//     cout << "Capitcity of the vector :" << v.capacity() << endl;
//     v.push_back(1);
//     cout << "Capitcity of the vector :" << v.capacity() << endl;
//     v.push_back(3);
//     cout << "Capitcity of the vector :" << v.capacity() << endl;
//     v.push_back(2);
//     cout << "Capitcity of the vector :" << v.capacity() << endl;
//     cout << "size of the vector:" << v.size() << endl;

//     cout << "before pop_back" << endl;
//     for (int i : v)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     v.pop_back(); // pop elements are the remove the last elements of the vector , arrays etc;

//     cout << "After bop_back" << endl;

//     for (int i : v)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     cout<<"Clear the size before "<<v.size()<<endl;
//     v.clear();
//     cout<<"Clear the size After "<<v.size()<<endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int vectorfind()
// {
//     // how to define the vector.
//     vector<int> v;
//     v.push_back(4);
//     v.emplace_back(2);
//     // access of the vector;
//     cout << v[1];
//     cout << endl;

//     // how to define the vector in the paris data type;
//     vector<pair<int, int>> v2;
//     v2.push_back({2, 4});
//     v2.emplace_back(7, 9); // automatical get in the pais;

//     // how to define the many elements in the vectors;
//     vector<int> v3(5, 100); // see the upper code;
//     vector<int> v4(5);      // collect the garbage value of the given value;

//     // how to use itraters;
//     vector<int>::iterator ne = v3.begin();
//     ne++;
//     cout << *(ne) << " ";

//     // ne update two positions;
//     ne = ne + 2;
//     cout << endl;

//     cout << *(ne) << " ";
// }
// int main()
// {
//     vectorfind();
// }

// use of for loop to print the elements;
#include <bits/stdc++.h>
using namespace std;
int useforvectro()
{
    vector<int> v(5);
    vector<int>::iterator it = v.begin();

    // first way;

    // for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
    //     cout<< *(it)<<" "<<endl;
    // }

    // second way;

    // for(auto it = v.begin(); it!=v.end(); it++){
    //     cout<< *(it)<< " " <<endl;
    // }

    // third way; it the foreach loop;
    // for(auto it:v){
    //     cout<< it<< " "<<endl;
    // }
}

int usefunction()
{

    // use some functions; eaarse in the funcitons;
    vector<int> fun(10);
    fun.erase(fun.begin() + 1);


    // vector<int>::iterator ne = fun.begin();
    // for (auto ne : fun)
    // {
    //     cout << fun << " " << endl;
    // }
}
int main()
{
    useforvectro();
    // this is the usefunction call;
    usefunction();
}