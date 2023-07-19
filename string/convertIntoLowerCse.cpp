#include <iostream>
using namespace std;

int getlength(char name[]){
    int i=0;
    int length=0;
    
        while(name[i]!='\0'){
            length ++;
            i++;
        }
            return length;

    }


void converIntolowerCase(char name[]){
    int n=getlength(name);
    for(int i=0; i<n; i++){
        if(name[i]>='a'&& name[i]<='z'){
        name[i]=name[i]-'A'+'a';

    }
    }
}

int main(){
char name[100]="ANAND";
converIntolowerCase(name);
cout<<"Into Lower Case: "<<name<<endl;
return 0;
} 