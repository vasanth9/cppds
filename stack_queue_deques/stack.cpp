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
int main()
{
    ArrayStack<int>a;
    a.push(100);
    cout<<a.top();
   

}