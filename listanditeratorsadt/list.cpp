#include<bits/stdc++.h>
using namespace std;
void display(vector<int>l)
{
    for(int i:l)
    {
        cout<<i<<"\t";
    }
    cout<<"\n";
}
int main()
{
    vector<int>l={7,9,10,0,32,-99,1,2,3,4,5,6};
    // size(),empty(),front(),back(),push_front(e),push_back(e),pop_back(),pop_front()

    cout<<"algorithms:\n";
    cout<<"1.sort(): list before sort: ";
    display(l);
    sort(l.begin(),l.end());
    cout<<"after sort: ";
    display(l);
    random_shuffle(l.begin(),l.end()-4);
    cout<<"2.Shuffle from begin and end-4: ";
    display(l);
    reverse(l.end()-6,l.end());
    cout<<"3.reverse from end-6 and end :";
    display(l);
    auto x=min_element(l.begin(),l.end());
    cout<<"min element: "<<*x<<"\n";
    cout<<"max element: "<<*(max_element(l.begin(),l.end()))<<"\n";
    cout<<"find element: "<<*(find(l.begin(),l.end(),-99))<<"\n";



}