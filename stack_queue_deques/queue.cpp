#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    q.push(100);
    q.push(200);
    q.push(-9);
    cout<<q.front()<<"\n";
    cout<<q.back()<<"\n";
    q.pop();
    cout<<"after pop\n";

    cout<<q.front()<<"\n";
    cout<<q.back()<<"\n";
    cout<<q.size()<<"\n";
    cout<<q.empty()<<"\n";
}