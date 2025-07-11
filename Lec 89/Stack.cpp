

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