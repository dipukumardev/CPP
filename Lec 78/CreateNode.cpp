#include <bits/stdc++.h>
using namespace std;
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
    // how to create a Node in Linked List:
    Node *Head;
    Head = new Node(4);
    cout << Head->data << endl;
    cout << Head->next << endl;

    // Add a new node in the starting:
    Node *temp;
    temp = new Node(24);
    temp->next = Head;
    Head = temp;
    cout << Head->data << endl;
    cout << Head->next << endl;
}