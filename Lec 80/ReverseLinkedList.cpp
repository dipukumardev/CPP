#include <bits/stdc++.h>
using namespace std;

// create a class;
class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int data)
    {
        val = data;
        next = NULL;
    }
};

int main()
{
    // crating a 5 size of the Node
    ListNode *head = new ListNode(1);
    ListNode *current = head;
    for (int i = 2; i <= 5; i++)
    {
        current->next = new ListNode(i);
        current = current->next;
    }
    cout << "Orignal linkedlist:";
    current = head;
    while (current != NULL)
    {
        cout << current->val;
        current = current->next;
    }

    // this code can reverse the linked list;

    vector<int> ans;
    ListNode *temp = head;
    while (temp != NULL)
    {
        ans.push_back(temp->val);
        temp = temp->next;
    }
    int i = ans.size() - 1;
    temp = head;
    while (temp)
    {
        temp->val = ans[i];
        i--;
        temp = temp->next;
    }
    cout << endl;
    cout << "This is the reverse of the linkedlist:";
    temp = head;
    while (temp != NULL)
    {
        cout << temp->val;
        temp = temp->next;
    }

    return 0;
}