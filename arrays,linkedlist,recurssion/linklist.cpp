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
