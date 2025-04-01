#include <bits/stdc++.h>
using namespace std;
// Creating a class;
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

// Creating a function to solve the problem to the Recursion Method;

Node *CreatLinkedList(int arr[], int index, int size)
{
    // Base Case
    if (index == size)
    {
        return NULL;
    }
    Node *temp;
    temp = new Node(arr[index]);
    temp->next = CreatLinkedList(arr, index + 1, size);
    return temp;
}
int main()
{
    Node *Head;
    Head = NULL;
    int arr[6] = {1, 2, 3, 4, 5, 6};
    Head = CreatLinkedList(arr, 0, 6);

    // Printing the all Nodes of the LinkedList;
    Node *temp;
    temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}