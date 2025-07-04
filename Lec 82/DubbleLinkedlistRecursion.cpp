#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

Node *CreateDLL(int arr[], int index, int size, Node *back)
{
    if (index == size)
    {
        return NULL;
    }

    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = CreateDLL(arr, index + 1, size, temp);
    return temp;
}

int main()
{
    Node *head = NULL;
    int arr[4] = {1, 2, 3, 4};
    reverse(arr, arr + 4); // this line to use the printing the reverse the arrays pring the linkedlsit;
    head = CreateDLL(arr, 0, 4, NULL);
    Node *temp = head;
    cout << "Updated Linked List: ";
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
};