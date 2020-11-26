#include<bits/stdc++.h>
using namespace std;
template<typename T>
class sLinkedList{
private:
sNode<T>* head;
public:
sLinkedList():head(NULL){
}
~sLinkedList(){
while(!empty())removeFront();
}
bool empty() const {
    return head==NULL;
}
const T& front() const{
    return head->elem;
}
void addFront(const T& e){
sNode<T>* v = new sNode<T>;
v->elem =e;
v->next=head;
cout<<v->elem;
head=v;
} 
void removeFront(){
    sNode<T> * old =head;
    head= old->next;
    
    delete old;
}



};
template <typename T>
class sNode{
    private:
    T elem;
    sNode<T>* next;
    friend class sLinkedList<T> ;  
};

int main()
{
    sLinkedList<int>a;
    a.addFront(100);
    cout<<"are";

}