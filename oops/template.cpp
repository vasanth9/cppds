#include<bits/stdc++.h>
using namespace std;
template <typename T>
T genericMin(T a, T b) {
return (a < b ? a : b);
}
int main()
{
    cout<<genericMin(22,32)<<" "<<genericMin(22.5,32.0)<<" "<<genericMin('y','o');
}