#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>d;
    d.push_front(100);
    d.push_back(400);
    cout<<d.front()<<"\n";
    cout<<d.back()<<"\n";
    d.push_front(-89);
    d.pop_back();
    d.pop_front();
    cout<<d.front()<<"\n";
    cout<<d.back()<<"\n";
    cout<<d.size()<<"\n";
    cout<<d.empty()<<"\n";

}