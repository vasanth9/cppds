#include<bits/stdc++.h>
using namespace std;
void rev(int * a,int i,int j)
{
    if(i<j){
        swap(a[i],a[j]);
        rev(a,i+1,j-1);
    }
}     
int main() 
{ 
    int a[]={1,2,3,4,5};
    for(int i : a){
           cout<<i<<"\t";
    }cout<<"\n";
    
    rev(a,0,4); 
    
  for(int i : a){
           cout<<i<<"\t";
    }cout<<"\n";
}