#include <bits/stdc++.h>
using namespace std;
// Creating a class of the name of ListNode;
class ListNode
{
public:
    int val;
    ListNode *next;

    // creating a constructor;
    ListNode(int data)
    {
        val = data;
        next = NULL;
    }
};
int main()
{

    // Creating the Linkedlist:
    ListNode *head = new ListNode(1);
    ListNode *current = head;

    int arr[5] = {2, 3, 4, 5, 6};
    for (int i = 0; i < 5; i++)
    {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    // Printing the LinkedList;
    current = head;
    cout << "Printing the LinkedList Elements:";
    while (current)
    {
        cout << current->val << " ";
        current = current->next;
    }

    // Write the code to Reverse the Linkedlist;
    ListNode *curr = head, *prev = NULL, *fut = NULL;
    while (curr)
    {
        fut = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fut;
    }
    head = prev;

    // Printing the Reverse Linkedlsit;
    cout << endl;
    curr = head;
    cout << "Printing the reverse Linkedlist with Node:";
    while (curr)
    {
        cout << curr->val << " ";
        curr = curr->next;
    }

    return 0;
}