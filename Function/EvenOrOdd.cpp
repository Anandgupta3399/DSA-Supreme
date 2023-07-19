#include <iostream>
using namespace std;
bool IsEven(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
int n; 
cin>>n;
bool ans=IsEven(n);
if(ans){
    cout<<"The Number is even";
}
else{
    cout<<"the number is odd";
}
return 0;
}