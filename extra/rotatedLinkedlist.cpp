// Rotate a LinkedList;
/*

Step:1-Given a Linked list(Done)
Step:2-Find the Size of the Linked list;(Done)
Step:3-Give a k value kth time rotate the linked list;
Step:4-Create a Temp head and point to the last node;
Step:5-Last Node point to the head;
Step:6-Temp when poin to the NULL;


These steps to help to build loging and Rember to the points;

*/

#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;

    ListNode(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{
    ListNode *head = new ListNode(1);
    ListNode *temp = head;
    for (int i = 2; i <= 5; i++)
    {
        temp->next = new ListNode(i);
        temp = temp->next;
    }

    ListNode *print = head;
    while (print)
    {
        cout << print->data << " ";
        print = print->next;
    }

    // let get a cout to fidn the size of the linkedlsit;
    temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    cout << endl
         << "Find the size of the Linkedlsit:" << count;
    cout << endl;

    int k;
    cout << "Enter the value of the K:";
    cin >> k;
    cout << k;

    k = k % count;
    if (k == 0)
    {
        cout << "Rotated List";
        temp = head;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        return 0;
    }

    // Agar k ka value % kay badd agar 0 nahi hai to ya follow karo;

    // Make it  circular;
    temp = head;
    ListNode *tail = NULL;
    while (temp->next)
    {
        temp = temp->next;
    }
    tail = temp;              // so tail move to the  last fo the node;
    tail = tail->next = head; // this line tail ka NUlL aab head ko point kar raha hai.

    // Move the temp in value of the KKKK;
    temp = head;
    for (int i = 0; i < count - k - 1; i++)
    {
        temp = temp->next;
    }
    // wehn Reached the k value;
    head = temp->next;
    temp->next = NULL;

    //  cout the Rotate Linked List 😒 so eassy;
    cout << "Rotated Linked List:";
    temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}