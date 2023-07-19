#include <iostream>
#include <string.h>
using namespace std;

int getlength(char name[]){
  int Length=0;
    int i=0;
while(name[i]!='\0'){

    Length++;
    i++;
}
return Length;
}
void converIntoUpperCase(char name[]){
    int n= getlength(name);
    for(int i=0; i<n;i++){
        name[i]=name[i]-'a'+'A';
    }
}

int main(){
char name[100]="anand";
converIntoUpperCase(name);
cout<<"In upper case "<< name<<endl;
return 0;
}