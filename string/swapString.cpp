#include <iostream>
#include <string.h>
using namespace std;
void ReverseString(char name[]){
    int i=0;
    int n=strlen(name);
    int e=n-1;
    while(i<=e){
        swap(name[i],name[e]);
        i++;
        e--;
    }
}
int main(){
char name[100]={"a,b,c,d,e"};

cout<<"length is: "<<strlen(name)<<endl;
cout<<"Initially string: "<<name<<endl;
ReverseString(name);
cout<<"After Swapping string: "<<name<<endl;
return 0;
}