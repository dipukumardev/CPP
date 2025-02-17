#include <iostream>
using namespace std;

// Create a Node;
class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
int main()
{
    Node *Head;
    Head = new Node(4);

    cout << Head->data << endl;
    cout << Head->next << endl;
}