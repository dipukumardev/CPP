#include <iostream>
#include <deque> // use to add and delation the element starting and end in the same time;
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(2);
    d.push_front(1);
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;



    d.pop_back(); // use to remove the last elements;
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
}