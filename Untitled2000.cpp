#include <bits/stdc++.h>
using namespace std;
int n,x;
priority_queue<int> pq;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        pq.push(x);
    }
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}

