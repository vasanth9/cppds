#include<bits/stdc++.h>
using namespace std;
class CNode{
private:
string elem;
CNode * next;
friend class CLinkedList;
};
class CLinkedList{
    public:
    CLinkedList():cursor(NULL){} //constructor
    
       
    
    bool empty() const //check the list is empty or not
    {return cursor->next==NULL;}
    const string front() const //return front element
    {   if(!empty())
        return cursor->next->elem;
        else{
            cout<<"List is empty!!!";
            return "EMPTY()";
        }
    }
    const string back() const //return next element
    {   if(!empty())
        return cursor->elem;
        else{
            cout<<"List is empty!!!";
            return "EMPTY()";
        }
    }
    void advance()  // to move the header ahead in the list
    {  
        cursor=cursor->next;
        
    }
    void add(const string e){
        CNode * curr = new CNode;
        curr->elem=e;
        if(cursor==NULL)
        {
            curr->next=curr;

            cursor=curr;
        }else{
            curr->next=cursor->next;
        cursor->next=curr;
        }
        
    }
    void remove(){
        CNode * old=cursor->next;
        
        
        if(old==cursor)
        { 
       
           cursor=NULL;
        }
        else
        {  
            cursor->next=old->next;
            delete old;
        }
        

    }

    private:
    CNode* cursor;
};
int main()
{
   
CLinkedList playList;
playList.add("Stayin Alive");
cout<<playList.front()<<"\n";
playList.add("Le Freak");
playList.add("Jive Talkin");
cout<<playList.front()<<"\n";
playList.advance();
cout<<playList.front()<<"\n";
playList.advance();
cout<<playList.front()<<"\n";
playList.remove();
playList.add("Disco Inferno");
cout<<playList.front()<<"\n";

}