#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void reverseQueue(queue<int> &q){
    stack<int> s;
    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }
    //put all elements stack into q
    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }
}

void reverseUsingRec(queue<int>&q){
    //base case
    if(q.empty()){
        return;
    }
    //step1
    int temp = q.front();
    q.pop();
    //step2
    reverseUsingRec(q);
    //step3
    q.push(temp);
}

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);

    // reverseQueue(q);
    reverseUsingRec(q);
    cout << "printing Queue after reversing recursively" << endl;
    while(!q.empty()){
        cout << q.front()<<" ";
        q.pop();
    }

    
    return 0;
}