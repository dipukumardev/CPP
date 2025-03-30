#include <bits/stdc++.h>
using namespace std;

// Create a Class
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
    Node *Head, *tail;
    tail = Head = NULL;
    int arr[4] = {1, 2, 3, 4};
    for (int i = 0; i<4; i++)
    {
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
            tail = Head;
        }
        else
        {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
    }
    Node *temp;
    temp = Head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}