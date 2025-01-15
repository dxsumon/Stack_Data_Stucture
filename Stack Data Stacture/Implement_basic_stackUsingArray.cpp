#include <bits/stdc++.h>
using namespace std;

class Stack
{
    public:
        vector<int>myStack;
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
    MyStack.push(10);
    MyStack.push(20);
    MyStack.push(30);
    MyStack.push(40);

    if(MyStack.empty()==false)
        MyStack.pop();
    if(MyStack.empty()==false)
        cout<<MyStack.top()<<endl;
    if(MyStack.empty()==false)
        MyStack.pop();
    if(MyStack.empty()==false)
        cout<<MyStack.top()<<endl;
    if(MyStack.empty()==false)
        MyStack.pop();
    if(MyStack.empty()==false)
        cout<<MyStack.top()<<endl;
    if(MyStack.empty()==false)
        MyStack.pop();
    if(MyStack.empty()==false)
        cout<<MyStack.top()<<endl;
    if(MyStack.empty()==false)
        MyStack.pop();
    if(MyStack.empty()==false)
        cout<<MyStack.top()<<endl;
    return 0;
}