#include <bits/stdc++.h>
using namespace std;
// Creat a Class;
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

    // Printing the all Node;
    Node *temp;
    temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}