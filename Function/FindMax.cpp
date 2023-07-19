#include <iostream>
using namespace std;
int findMax(int num1, int num2, int num3){
    if(num1 >num2 && num1 > num3){
         return num1;
    }
    else if(num2 > num1 && num2 > num3){
        return num2;
    }
    else{
        return num3;
    }
}
int main(){
int n1=5;
int n2=6;
int n3=3;
cout<< findMax(n1,n2,n3);
return 0;
}