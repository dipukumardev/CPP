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
    head = CreateDLL(arr, 0, 4, NULL);

    int postion = 2;

    // insert in start;
    if (postion == 0)
    {
        // Linkedlsit exit na karti hai;
        if (head == NULL)
        {
            head = new Node(5);
        }

        // Agar exgist karti hai;
        else
        {
            Node *temp = new Node(5);
            temp->next = head;
            temp->prev = temp;
            head = temp;
        }
    }
    else
    {

        Node *curr = head;
        while (--postion)
        {
            curr = curr->next;
        };
        // insert at end;
        if (curr->next == NULL)
        {
            Node *temp = new Node(5);
            temp->prev = curr;
            temp->next = temp;
        } // last node

        // insert at middle any postion;
        else
        {
            Node *temp = new Node(5);
            temp->next = curr->next;
            temp->prev = curr;
            curr->next = temp;
            temp->next->prev = temp;
        }
    }

    Node *temp = head;
    cout << "Updated Linked List: ";
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
};