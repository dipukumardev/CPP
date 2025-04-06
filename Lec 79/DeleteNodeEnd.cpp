// Delete Node in the Linkedlist;

// Delete the Last node in the linkedlist;

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

    // Delete the Last node of the Linkedlist;

    if (Head != NULL)
    {
        if (Head->next == NULL)
        {
            Node *temp = Head;
            Head = NULL;
            delete temp;
        }
        else
        {

            Node *curr = Head;
            // Create a Second Node to when curr Pointer delete so use to second node make last value is next ==null;
            Node *pre = NULL;
            while (curr->next != NULL)
            {
                pre = curr;
                curr = curr->next;
            }

            delete curr;
            pre->next = NULL;
        }
    }

    while (Head)
    {
        cout << Head->data << " ";
        Head = Head->next;
    }
    return 0;
}