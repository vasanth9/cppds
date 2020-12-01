#include<bits/stdc++.h>
using namespace std;
int arrsum(int *a, int n)
{
  if(n==1) return a[0];
  else return arrsum(a,n-1)+a[n-1];
}
int main()
{
    int a[]={1,2,3,4,5};
    cout<<arrsum(a,5)<<"\n";
}