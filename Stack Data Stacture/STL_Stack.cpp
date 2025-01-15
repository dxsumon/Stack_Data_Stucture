#include <bits/stdc++.h>
using namespace std;

int main()
{ //Build in Stack STL;
    stack<int>myStack;
    int n;cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        myStack.push(x);
    }
    while(!myStack.empty())
    {
        cout<<myStack.top()<<endl;
        myStack.pop();
    }
    return 0;
}