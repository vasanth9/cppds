#include<bits/stdc++.h>
using namespace std;

void sorting(int* A,int n){
    for(int i=1;i<n;i++)
    {
       int now=A[i];
       int j=i-1;
       while((j>=0)&&(now<A[j]))
       {
           A[j+1]=A[j];
           j--;
       }
       A[j+1]=now;
    }
}
int main()
{
    int A[]={1,100,3,6,6,55,2};
    int n=sizeof(A)/sizeof(A[0]);
    for(int i=0;i<n;i++)cout<<A[i]<<" ";
    cout<<"\n";
    sorting(A,n);
 for(int i=0;i<n;i++)cout<<A[i]<<" ";
    cout<<"\n";
}