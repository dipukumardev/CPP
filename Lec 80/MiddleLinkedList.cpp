// Find the middle node of the LinkedList;

// steps to solve the problem;
// step:1- Creata a size of a Linkedlist;
// step:2- count the size fo the linkedlist
// step:3- Create a temp and move the count/2 size the temp;
// step:4- and return the temp when reach the count/2;

#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int value;
    ListNode *next;

    ListNode(int data)
    {
        value = data;
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

    ListNode *curr = head;
    while (curr)
    {
        cout << curr->value << " ";
        curr = curr->next;
    }

    int count = 0;
    ListNode *temp1 = head;
    while (temp1 != NULL)
    {
        count++;
        temp1 = temp1->next;
    }
    cout << endl << "Printin the size of the linkedlsit " << count << endl;
    count = count/2;
    temp1 = head;
    while(count--)
    {
        temp1 = temp1->next;
    }
    cout<<"Value of the Middle Linklist Node:"<<temp1->value;
    return 0;
}