#include <iostream>
using namespace std;

// when create a class;
class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    { // constructor code
        val = data;
        next = NULL;
    }
};

int main()
{

      //creating a node object;
      Node* n = new Node(1);
    cout<< n->val << " "<< n->next<<endl;
    return 0;
}