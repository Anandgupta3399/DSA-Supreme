#include <iostream>
#include <deque>
using namespace std;
int main(){
//creation

deque<int> dq;

dq.push_front(5);
dq.push_front(10);
dq.push_back(40);
dq.push_back(33);

cout << "Front: " << dq.front() << endl;

cout << "size:" << dq.size() << endl;
dq.pop_front();
cout << "Front: " << dq.front() << endl;
// dq.pop_back();
cout << "size:" << dq.size() << endl;
cout << "back: " << dq.back() << endl;

return 0;
}