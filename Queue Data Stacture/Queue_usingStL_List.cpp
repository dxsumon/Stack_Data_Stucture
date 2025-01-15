#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    list<int>queue;
    
    void push(int val)
    {//Time complexity 0(1);
        queue.push_back(val);
    }

    void pop()
    {//time Complexity 0(1)
        queue.pop_front();
    }
    int font()
    {
        return queue.front();
    }
    int back()
    {
        return queue.back();
    }
    bool empty()
    {
        return queue.empty();
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