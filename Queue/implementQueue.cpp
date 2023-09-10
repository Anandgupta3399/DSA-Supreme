#include <iostream>
using namespace std;
class Queue{
    public:
        int size;
        int *arr;
        int front;
        int rear;
    Queue(int size){
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    void push(int data){
        if(rear==size){
            cout << "q is full ";
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }
    void pop(){
        if(front == rear){
            cout << "Q is empty";
        }
        else{
           arr [front] = -1;
           front++;
           if(front==0){
               front = 0;
               rear = 0;
           }
        }
    }
    int getFront(){
        if(front==rear){
           cout << "Qis empty";
           return -1;
        }
        else{
          return arr[front];
        }
    }

    int isEmpty(){
        if(front==rear){
          return true;
        }
        else{
          return false;
        }
    }
    int getSize(){
        return rear - front;
    }
};
int main(){
    Queue q(10);
    q.push(5);
    q.push(15);
    q.push(20);
    q.push(25);

    cout << "Size of queue is: " << q.getSize() << endl;
    cout << "get front:" << q.getFront()<< endl;
    q.pop();
    cout << "Size of queue is:" << q.getSize() << endl;

    if(q.isEmpty()){
        cout << "q  is empty";
    }
    else{
        cout << "q is not empty";
    }
   cout<<"get front:"<<q. getFront();

    return 0;
}