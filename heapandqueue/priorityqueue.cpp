#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>q;
    q.push(100);
    q.push(-99);
    q.push(400);
   int s=q.size();
   for(int i=0;i<s;i++)
   {
       cout<<q.top()<<"\n";
       q.pop();
   }
}