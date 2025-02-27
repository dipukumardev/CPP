#include <iostream>
using namespace std;
// Create a Class;
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
    // Head = new Node(4);
    Head = NULL;

    // Create a Arrays:
    int arr[4] = {1, 2, 4, 5};
    for (int i = 0; i < 4; i++)
    {
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
        }
        else
        {
            Node *temp;
            temp = new Node(arr[i]);
            temp->next = Head;
            Head = temp;
        }
    }
    // print the Head of the Linked List && Address;
    cout << Head->data << endl;
    cout << Head->next << endl;

    // Print the All Node of the Linked List;
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    return 0;
}