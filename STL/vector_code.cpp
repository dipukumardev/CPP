// practice code_arrm
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // This part of code play role of size and capacity;
    vector<int> v;
    cout << "Size of the v:" << v.size() << endl;
    cout << "Capicity of the v:" << v.capacity() << endl;
    v.push_back(4);
    v.push_back(3);
    v.push_back(8);

    cout << "Size of the v:" << v.size() << endl;
    cout << "Capicity of the v:" << v.capacity() << endl;

    // upadate the value;
    v[1] = 10;
    cout<<v[1];


    // creating a new vectro or installizing the vector;
    vector<int>v1(5,1); // all element in this verctr are 1;

    cout << "Size of the v:" << v1.size() << endl;  // when we installiging the vector are smae size and capicity;
    cout << "Capicity of the v:" << v1.capacity() << endl;
    v1.push_back(12);
    
    cout << "Size of the v:" << v1.size() << endl; // this time chage the value of the size and capacity;
    cout << "Capicity of the v:" << v1.capacity() << endl;



    // delete the element in the vector;
    vector<int>v3;
    v3.push_back(4);
    v3.push_back(44);
    v3.push_back(43);
    v3.push_back(42);
    v3.push_back(41);
    
    v3.pop_back();
    cout<<"Size of the v3:"<<v3.size() <<endl;

    // how to delete a fixed index;

    v3.erase(v3.begin() + 1);
      cout<<"Size of the v3:"<<v3.size();
    //  print the all element of the v3 vector;
    for(int i = 0; i<v3.size(); i++){
        cout<<v3[i]<<" ";
    }

cout<<endl;

// how to insert the element in the vector;
    v3.insert(v3.begin() +1 , 50);
     for(int i = 0; i<v3.size(); i++){
        cout<<v3[i]<<" ";
    }



// sorting an vector;
vector<int>so;
so.push_back(5);
so.push_back(50);
so.push_back(500);
so.push_back(5000);
so.push_back(50000);

sort(so.begin(), so.end());
for(int i = 0; i<so.size(); i++){
    cout<<so[i]<<" ";
}

}