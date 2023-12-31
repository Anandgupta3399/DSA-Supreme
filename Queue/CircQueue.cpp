#include <iostream>
using namespace std;
int main(){
class CirQueue{
    public:
        int size;
        int *arr;
        int front;
        int rear;

        CirQueue(int size){
            this->size = size;
            arr = new int[size];
            front = -1;
            rear = -1;
        }

        void push(int data){
            // TODO: add one more condition in the QUEUE FULL if block
            
            // Queue Full
            if (front == 0 && rear == size - 1)
            {
                cout << "Q is full,cannot insert" << endl;
        }
        // single element case - > first element
        else if(front == -1){
            front = rear = 0;
            arr[rear] = data;

        }
        // circular nature
        else if(rear == size-1 && front!=0){
            rear = 0;
            arr[rear] = data;
        }
        // normal flow
        else{
            rear++;
            arr[rear] = data;
        }
        }
        void pop(){
        // empty check
        // single element
        // circular nature
        // normal flow

    if(front ==-1){
            cout << "Q is empty,cannot pop" << endl;
    }
    else if(front == rear){
            arr[front] = -1;
            front = -1;
            rear = -1;
    }
    else if(front ==size-1){
            front = 0;
    }
    else{
            front++;
    }
        }
};
return 0;
}