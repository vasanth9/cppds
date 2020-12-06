#include<bits/stdc++.h>
using namespace std;
void bubblesort(vector<int>& x){
    int l=x.size();
    for(int i=0;i<l;i++)
    {
        for(int j=1;j<l-i;j++)
        {
            if(x[j-1]>x[j])
            {
                 swap(x[j-1],x[j]);
            }
        }
    }
}
int main()
{
    vector<int>x={1,-66,7,88,2,89,99};
    bubblesort(x);
     for(int i:x){
         cout<<i<<"\t";
     }
}