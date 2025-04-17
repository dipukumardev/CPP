/*


Crate the Linked list and Give the value of N = ? and than end of delete the node:
eg:- 1,2,3,4,5 and n = 3 so last sai 3rd node will be deleted so look like 1,2,4,5;

Step:1- Create a linked list;
Step:2- Get the val of the N;
Step:3- Crate the new Middle linkelist Node and move to the value of the N and also create the Prev && fut node;
Step:4- Prev node and fut node point to each other ;
Step:5- Delete the Middle node;
Step:6- Return the Head;



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
    ListNode *Head = new ListNode(1);
    ListNode *temp = Head;
    for (int i = 2; i <= 5; i++)
    {
        temp->next = new ListNode(i);
        temp = temp->next;
    }

    // cout<<

    temp = Head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    int N;
    cout << "Enter the value of the N:";
    cin >> N;

    int count = 0;
    temp = Head;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    count = count - N;

    ListNode *curr = Head, *prev = NULL;

    while (count--)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;

    // Printing the N end node deleted;
    cout << "Print the N postion Node Deleted:";
    temp = Head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}

// 4 questions solve but leetcode or gfg par; total solve : 5;
