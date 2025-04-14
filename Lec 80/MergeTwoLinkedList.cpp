#include <iostream>
using namespace std;
// Create a class;
class ListNode
{
public:
    int value;
    ListNode *next;

    // create a constructor of this class;
    ListNode(int data)
    {
        value = data;
        next = NULL;
    }
};
int main()
{
    // Create first Linked lsit;
    ListNode *head = new ListNode(1);
    ListNode *first = head;
    for (int i = 2; i <= 4; i++)
    {
        first->next = new ListNode(i);
        first = first->next;
    }

    cout << "Printing the first Linkedlist:";
    first = head;
    while (first)
    {
        cout << first->value << " ";
        first = first->next;
    }

    // create the second linkedlist;
    ListNode *head2 = new ListNode(1);
    ListNode *second = head2;
    for (int i = 2; i < 4; i++)
    {
        second->next = new ListNode(i);
        second = second->next;
    }
    cout << endl;
    cout << "printing the Second linkedlsit:";
    second = head2;
    while (second)
    {
        cout << second->value << " ";
        second = second->next;
    }

    first = head;
    second = head2;

    ListNode *dummy = new ListNode(0);
    ListNode *curr = dummy;
    while (first != NULL && second != NULL)
    {
        if (first->value <= second->value)
        {
            curr->next = first;
            first = first->next;
        }
        else
        {
            curr->next = second;
            second = second->next;
        }
        curr = curr->next;
    }

    if (first)
        curr->next = first;
    if (second)
        curr->next = second;

    // Printing the merge Linkedlsit of first and second;
    cout << endl;
    cout << "printing the merge the sorted Linkedlsit:";
    ListNode *merged = dummy->next;
    while (merged)
    {
        cout << merged->value << " ";
        merged = merged->next;
    }

    return 0;
}