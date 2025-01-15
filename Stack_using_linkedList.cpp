#include <bits/stdc++.h>
using namespace std;

class Stack
{
    public:
        list<int>myStack;
        void push(int val)
        {
            // Time complexity O(1);
            myStack.push_back(val);
        }
        void pop()
        {
            // Time complexity O(1);
            myStack.pop_back();
        }
        int top()
        {
            // Time complexity O(1);
            return myStack.back();
        }
        int size()
        {
            // Time complexity O(1);
            return myStack.size();
        }
        bool empty()
        {
            // Time complexity O(1);
            return myStack.empty();
        }
};
int main()
{
    Stack MyStack;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        MyStack.push(x);
    }

    while(!MyStack.empty())
    {
        cout<<MyStack.top()<<endl;
        MyStack.pop();
    }
    return 0;
}