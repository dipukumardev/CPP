

// This code Valid for only Positive Number:

#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int *arr;
    int size;
    int top;

public:
    // Constructor;
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }
    // Push oprations;
    void Push(int value)
    {
        if (top == size - 1)
        {
            cout << "Stack Overflow:";
            return;
        }
        else
        {
            top++;
            arr[top] = value;
            cout << "Push " << value << " into the Stack" << endl;
        }
    }

    // Pop oprations:
    void Pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow";
            return;
        }
        else
        {
            cout << " Pop " << arr[top] << " Of the Stack" << endl;
            top--;
        }
    }

    // Stack Top
    int Top()
    {
        if (top == -1)
        {
            cout << "Stack is empty:";
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    // Stack Empty;
    bool isEmpty()
    {
        return top == -1;
    }

    // Stack Size;
    int isSize()
    {
        return top + 1;
    }
};
int main()
{

    Stack S(5);
    S.Push(5);
    S.Push(6);
    S.Push(7);
    S.Push(8);
    S.Push(9);

    // pop
    S.Pop();

    // Top Elements;
    cout << "Top Element in Stack is:" << S.Top() << endl;

    // Is Empty or Not:
    cout << "Stack is " << S.isEmpty() << endl;
    // Is Size of the Arrays:
    cout << "Stack Atual Size is:" << S.isSize() << endl;
}














// Second Time;

#include<bits/stdc++.h>
using namespace std;
// Create a Node;
class Node
{
    public:
    int data;
    Node *next;
    
    // Create a constructure;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

// Than start to create a stack;

class Stack
{
    Node *Top;
    int Currentsize; // it can helps to know the Actual size of the Linkedlist;
    
    public:
    Stack()
    {
        Top = NULL;
        Currentsize = 0;
    }
    
    // push
    void push(int value)
    {
        Node *temp = new Node(value);
        // In the Case of full of Heap Memory;
        if(temp == NULL)
        {
            cout<<"Stack is OverFlow";
            return;
        }
        else{
        temp -> next = Top;
        Top = temp;
        Currentsize++;
        }
    }
    // pop
    void pop()
    {
        if(Top == NULL)
        {
            cout<<"Stack Underflow";
            return;
        }
        else
        {
            Node * temp = Top;
            Top = Top->next;
            delete temp;
            Currentsize--;
        }
    }
    
    // Peek;
    int peek()
    {
        if(Top == NULL)
        {
            cout<<"Stack is Empty";
            return -1;
        }
        else
        {
            return Top->data;
        }
    }
    
    // Empty
    bool IsEmpty()
    {
        return Top == NULL;
    }
    
    // Is Size
    int size()
    {
        return Currentsize;
    }
};

int main()
{
    
    Stack S;
    S.push(5);
    S.push(5);
    S.push(5);
    S.push(5);
    S.push(5);
    S.push(5);
    
    S.pop();
    cout<<S.size();
    
}