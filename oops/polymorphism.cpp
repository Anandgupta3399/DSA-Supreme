#include <iostream>
using namespace std;

class Param{
    public:
        int val;
        void operator+(Param& obj2){
            int value1 = this->val;
            int value2 = obj2.val;
            cout << (value2 - value1) << endl;
        }
};

// class Maths{
// public:
// int sum(int a ,int b){
//     cout << "I am in first:" << endl;
//     return a + b;
// }
// int sum(int a, int b, int c){
//     cout << "I am in second:" << endl;
//     return a + b + c;
// }
// int sum(int a, float b){
//     cout << "I am in third:" << endl;
//     return a + b + 10;
// }

// aise type ka return mat krna
// double sum(int a,int b){
//     return 500;
// }

// };

int main(){

        Param obj1, obj2;
        obj1.val=2;
        obj2.val=3;

        obj1 + obj2;
        // Maths obj;
        // cout<<obj.sum(2, 3);

        return 0;
}