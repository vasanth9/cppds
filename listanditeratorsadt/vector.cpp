#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={100,300,800,400,500};
    cout<<v.size()<<"\n";
    for(int i:v){
        cout<<i<<"\t";
    }cout<<"\n";
    v.push_back(3000);
     for(int i:v){
        cout<<i<<"\t";
    }cout<<"\n";
    v.pop_back();
    cout<<v[v.size()-1]<<"\n";
    cout<<v.at(2)<<"\n";
    cout<<v.front()<<"\n";
    cout<<v.back()<<"\n";
}