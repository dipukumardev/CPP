
// Insertion at the End of the Node;

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

int main()
{
    Node *head = new Node(1);
    Node *temp = head;
    for (int i = 2; i < 5; i++)
    {
        temp->next = new Node(i);
        temp = temp->next;
    }

    temp = head;
    cout << "Print the Normal LInkedlsit: ";
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }

    Node *temp1 = new Node(17);
    curr->next = temp1;
    temp1->prev = curr;

    temp = head;
    cout << "Updated Linked List: ";
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}