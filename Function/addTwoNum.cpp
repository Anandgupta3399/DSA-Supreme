#include <iostream>
using namespace std;
int add(int a, int b){

int result = a+b;
return result;
    // int a,b;
    // cin>>a;
    // cin>>b;
    // int sum=0;
    // sum=a+b;
    // cout<<"The Sum of "<<a<<" + "<< b<<" is "<<sum;
}
int main(){
    int a; 
    cin>>a;
    int b;
    cin>>b;
    int sum=add(a,b);
    cout<<sum;
return 0;
}