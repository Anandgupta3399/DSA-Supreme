#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=2;i<n;i++)
if(n%i==0){
    cout<<"not a prime no"<<endl;
}
else{
    cout<<"prime no"<<endl;
}
return 0;
}