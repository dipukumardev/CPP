#include <bits/stdc++.h>
using namespace std;
// Create a Class;
class Node
{
public:
    int data;
    Node *next;

    // Create a Constructor;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

// Create a function;
Node *CreateLinkedList(int arr[], int index, int size, Node *prev)
{
    // Base Case
    if (index == size)
    {
        return prev;
    }

    Node *temp;
    temp = new Node(arr[index]);
    temp->next = prev;
    return CreateLinkedList(arr, index + 1, size, temp);
}
int main()
{
    Node *Head;
    Head = NULL;

    int arr[6] = {1, 2, 3, 4, 5, 6};

    Head = CreateLinkedList(arr, 0, 6, Head);

    int x = 2;
    int value = 28;
    Node *temp = Head;
    x--;
    while (x--)
    {
        temp = temp->next;
    }

    Node *temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;

    // Printing the all nodes;
    Node *print;
    print = Head;
    while (print)
    {
        cout << print->data << " ";
        print = print->next;
    }
    return 0;
}