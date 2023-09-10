#include <iostream>
#include <queue>
using namespace std;
int main(){
//creation
queue<int> q;

//insertion
q.push(5);
q.push(10);
q.push(25);
q.push(30);

//get front
cout << "front element is:" << q.front()<<endl;

//getSize
cout << "Size of Queue is:" << q.size() << endl;
 //removal
q.pop();
cout << "size of queue is:" << q.size() << endl;

//empty check
if(q.empty()){
    cout << "q is empty";
}
else{
    cout << "q is not empty";
}

return 0;
}