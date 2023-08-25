#include <iostream>
#include <stack>
using namespace std;

class Stack{
public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        arr = new int(size);
        this->size = size;
        top = -1;
    }
    void push(int data){
         if(size-top>1){
            //space available
            top++;
            arr[top] = data;
         }
         else{
            //space not available
            cout << "stack overflow:" << endl;
         }
    }
    void pop(){
         if(top == -1){
      //stack is empty
            cout << "stack is underflow, can't be deleted:" << endl;
         }
         else{
            //stack is not empty
            top--;
         }
    }
    int getTop(){
      if(top==-1){
            cout << "stack is empty, can't get top elem:";
      }
      else{
        return    arr[top];
      }
    }
    bool isEmpty(){
        if(top==-1){
        return true;
        }
        return false;
    }
    //return number of valid element present in stack
    int getSize(){
      return top + 1;
    }
};

int main(){

    Stack s(3);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    
    while(!s.isEmpty()){
     cout<<"top element"<< s.getTop() << " "<<endl;
     s.pop();
     cout << endl;
     cout << "the size of stack is:" <<s. getSize()<<endl;
     s.pop();

    }

    return 0;
}

    // stack<int> st;

    // // insertion
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // st.push(50);

    // //remove
    // st.pop();

    // //check element on top
    // cout << "element on top is:" << st.top() << endl;
    // //check size
    // cout << "size of stack is:" << st.size()<<endl;
    

    // //check empty
    // if(st.empty()){
    //     cout << "stack is empty" << endl;
    //     }
    //     cout << "stack is not empty" << endl;
