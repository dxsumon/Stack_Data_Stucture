#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Stack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    { // Time Complexity 0(1);
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop()
    { // Time complexity O(1);
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }
    int top()
    { // Time complexity O(1);
        return tail->val;
    }
    int size()
    { // Time complexity O(1);
        return sz;
    }
    bool empty()
    { // Time complexity O(1);
        return head == NULL;
    }
};
int main()
{
    Stack MyStack;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        MyStack.push(x);
    }

    while (!MyStack.empty())
    {
        cout << MyStack.top() << endl;
        MyStack.pop();
    }
    return 0;
}