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

    // Delete at end;

    if (head != NULL)
    {
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
        }
        else
        {
            Node *curr = head;
            while (curr->next)
            {
                curr = curr->next;
            }

            curr->prev->next = NULL;
            delete curr;
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