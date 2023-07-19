#include <iostream>
using namespace std;
int main(){
int n,temp;
cin>>n;
 temp=n;
int reverseNo=0;
while(n>0){
    int lastdigit=n%10;
    n=n/10;
    reverseNo=reverseNo*10+lastdigit;
}
if(temp==reverseNo){
    cout<<"palindrome";
}
else{
    cout<<"not palindrome";
}
// cout<<reverseNo<<" ";

return 0;
}