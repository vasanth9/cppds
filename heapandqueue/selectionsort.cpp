#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      v.push_back(x);
        }
        vector<int>z;
        for(int i=0;i<n;i++)
        {
            auto m=min_element(v.begin(),v.end());
            z.push_back(*m);
            v.erase(m);
        }
        for(int i=0;i<n;i++)
        {
            cout<<z[i]<<"\t";
        }cout<<"\n";
}