#include <iostream>
using namespace std;
int main(){
int n=123;


int reverse=0;
while(n>0){
    int lastdigits=n%10;
        n=n/10;
    reverse=reverse*10+lastdigits;
}
cout<<reverse;
return 0;
}