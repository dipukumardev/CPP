
// Insertion in the Start of the Node;

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

    cout << endl;
    // insertion in the starting in the double Linkedlist:
    Node *add = new Node(4);
    add->next = head;
    head->prev = add;
    head = add;

    // print the insertion in start;
    temp = head;
    cout<<"Print when Add in the Starting a Node: ";
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}