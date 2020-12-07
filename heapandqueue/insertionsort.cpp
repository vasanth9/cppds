//remove minimum from the list is selection sort;
// adding at position is insertion sort;
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        int r=v.size();
        if(r==0)
        {
            v.insert(v.begin(),x);
        }
        else{
               int in=0;
               for(int i=0;i<r;i++)
               {
                   if(v[i]>x)
                   {in=1;
                       v.insert(v.begin()+i,x);break;
                   }
               }
               if(in==0)
               {
                   v.insert(v.end(),x);
               }
        }

       
    }
    for(int i=0;i<n;i++)
{
    cout<<v[i]<<"\t";
}cout<<"\n";
}
