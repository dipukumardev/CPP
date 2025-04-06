// Delete Node in the Linkedlist;

// Delete the first node in the linkedlist;

#include <bits/stdc++.h>
using namespace std;

// Create a class;
class Node
{
public:
    int data;
    Node *next;

    // create a consturctor;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

// Creating a function
Node *CreateLinkedlist(int arr[], int index, int size)
{
    if (index == size)
    {
        return NULL;
    }

    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedlist(arr, index + 1, size);
    return temp;
}

int main()
{
    Node *Head;
    Head = NULL;
    int arr[6] = {1, 2, 3, 4, 5, 6};
    Head = CreateLinkedlist(arr, 0, 6);

    // while (Head)
    // {
    //     cout << Head->data << " ";
    //     Head = Head->next;
    // }

    // Delete the First node of the Linkedlist; two line of code can delete the fist node of the linkedlist;
    if (Head != NULL)
    {

        Node *temp = Head;
        Head = Head->next;
        delete temp;
    }

    while (Head)
    {
        cout << Head->data << " ";
        Head = Head->next;
    }
    return 0;
}