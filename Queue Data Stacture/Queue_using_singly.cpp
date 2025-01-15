#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class myQueue
{
public:
    int sz = 0;
    Node *head = NULL;
    Node *tail = NULL;
    
    void push(int val)
    {//Time complexity 0(1);
        sz++;
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop()
    {//time Complexity 0(1)
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL)
        {
            tail = NULL;
        }
    }
    int font()
    {
        return head->val;
    }
    int back()
    {
        return tail->val;
    }
    bool empty()
    {
        return head==NULL;
    }
};

int main()
{
    int n;
    cin>>n;
    myQueue queue;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int x;cin>>x;
        queue.push(x);
    }

    while(!queue.empty())
    {
        cout<<queue.font()<<endl;
        queue.pop();
    }
    
    return 0;
}