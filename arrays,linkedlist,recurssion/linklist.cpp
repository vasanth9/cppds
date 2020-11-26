#include<bits/stdc++.h>
using namespace std;
class StringNode {
private:
string elem;
StringNode* next;
friend class StringLinkedList;
};

class StringLinkedList {
public:
StringLinkedList(): head(NULL) { }

~StringLinkedList(){ while (!empty()) removeFront(); }

bool empty() const{ return head == NULL; }

const string& front() const { return head->elem; }

void addFront(const string& e){ 
StringNode* v = new StringNode;
v->elem = e;
v->next = head;
head = v;
}

void removeFront(){
StringNode* old = head;
head = old->next;
delete old;
}


private:
StringNode* head;
};
int main()
{
StringLinkedList a;
cout<<a.empty();
a.addFront("awesome");
cout<<a.empty();
cout<<a.front();
}


/*
const came from constant mean something is not changeable but readable.

if we qualify our variable with const keyword ,we can't change it later.
e.g.
constint var =25;     const variable must be initialized when it's declared.
var =50; // gives error

if we qualify our pointer variable with const after * then we can't change pointer itself but content of pointer is changeable.
e.g.
int *const ptr = new int;
ptr = new int; //gives error
// but
*ptr=5445; //allowed

if we qualify our pointer variable with const before * then we can change pointer itself but content of pointer is not changeable.
e.g.
intconst* ptr = new int(85);
         //or       
constint * ptr = new int(85);
ptr = new int; // allowed
// but
*ptr=5445; // gives error

pointer and content both constant
e.g.
intconst*constptr = new int(85);
         //or                        
constint *constptr = new int(85);
ptr = new int; // not allowed
*ptr=5445; // not allowed

Circle copy(const Circle &);
here const Circle means value of Circle is only readable ,if we try to change value of Circle inside function then it gives error.
friend Circle copy(Circle&) const;
This type of function is not for non member variable .it is used for class or structure. Here whole function is qualified with const keyword means we can't change object member variable . e.g
    class A{ public :
              int  var;
              void fun1()
                    { var = 50; // allowed
                    } 
              void fun2()const
                       { var=50; //not allowed
                       }
           }; 
           
*/







