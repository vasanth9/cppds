#include<bits/stdc++.h>
using namespace std;
class DNode{
private:
string elem;
DNode* next;
DNode* prev;
friend class DLinkedList;
};
class DLinkedList{
    public:
    DLinkedList() //constructor
    {
        header = new DNode;
        trailer = new DNode;
        header->next=trailer;
        trailer->prev=header;
    } 
    ~DLinkedList() //destrutor
    {
        while(!empty())removeFront();
        delete header;
        delete trailer;
         
    }
    bool empty() const //check the list empty or not
    {
        return header->next == trailer;
    }
    const string front() //return the front element
    {   
        return header->next->elem;
    }
    const string back() //return the back element
    {
        return trailer->prev->elem;
    }
    void addFront(const string& e) // add to front 
    {
       add(header->next,e);
        
    }
    void addBack(const string& e) // add to back
    {
        add(trailer,e);
    }
    void removeFront() //remove the front node
    {
        remove(header->next);
    }
    void removeBack() //remove the back node
    {
        remove(trailer->prev);
    }
    private:
    DNode* header;
    DNode* trailer;
    protected:
    void add(DNode *v,const string& e){
        DNode * u =new DNode;
        u->elem=e;
        u->next=v;
        u->prev=v->prev;
        v->prev->next=u;
        v->prev=u;     
    }
    void remove(DNode *v)
    {
        v->prev->next=v->next;
        v->next->prev=v->prev;
        delete v;
    }

};
int main()
{
    DLinkedList d;
    
    d.addFront("100");
    cout<<d.front()<<" "<<d.back()<<"\n";
    d.addFront("200");
    cout<<d.front()<<" "<<d.back()<<"\n";
    d.addBack("300");
    cout<<d.front()<<" "<<d.back()<<"\n";
    d.removeBack();
    cout<<d.front()<<" "<<d.back()<<"\n";
    d.removeFront();
    cout<<d.front()<<" "<<d.back()<<"\n";
    
}