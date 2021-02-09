#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for(int i=i;i<int(n);i++)
int main()
{
    deque<int>q;
    q.push_back(2);
    q.push_front(1);
    cout<<q.front()<<" ";
    cout<<q.back()<<" ";
    q.pop_back();
    deque<int>q1 = q;
    cout<<q1.front();
    return 0;
}
