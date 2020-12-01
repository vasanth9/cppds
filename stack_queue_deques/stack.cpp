#include<bits/stdc++.h>
using namespace  std;
class RuntimeException{
    private:
    string errorMsg;
    public:
    RuntimeException(const string& err){errorMsg = err;}
    string getMessage() const {return errorMsg;}
    };
class StackError : public RuntimeException{
    public: 
    StackError(const string& err): RuntimeException(err){}

};
template<typename E>
class ArrayStack{
    enum{def_cap=100}; //default stack capacity
    public:
    ArrayStack(int  cap=def_cap):S(new E[cap]),capacity(cap),t(-1){};
    int size()const
    {
        return t+1;
    }
    bool empty() const
    {
        return t<0;
    }
    const E& top() const 
    {
        if(empty()) throw StackError("The Stack is empty.");
        return S[t];
    }
    void push(const E& e) 
    {
        if(size()==capacity){
            throw StackError("The Stack is Full");
        }
        S[++t]=e;
         
    }
    void pop() 
    {
        if(empty()) throw StackError("The Stack is empty.");
        --t;
    }
    private:
    E* S;
    int capacity; 
    int t;

};
template<typename T>
void vecrev(vector<T>&V)
{
    ArrayStack<T>S(V.size());
    for(int i=0;i<V.size();i++)S.push(V[i]);
    for(int i=0;i<V.size();i++){
        cout<<S.top()<<"\n";S.pop();
    }
}
int main()
{
    ArrayStack<int>a;
    a.push(100);
    cout<<a.top()<<"\n";

   vector<int>v={100,100,400};
   vector<char>t={'w','w','e'};
   vecrev(v);
   vecrev(t);

}