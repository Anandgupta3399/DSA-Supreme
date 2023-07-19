#include <iostream>
#include <string.h>
using namespace std;

int ReplaceSpaces(char sentence[]){
    int i=0;
    int n=strlen(sentence);
    for(int i=0; i<n;i++){
        if(sentence[i]==' '){
            sentence[i] ='@';
        }
    }
}

int main(){
char sentence[100];
cin.getline(sentence,100);
ReplaceSpaces(sentence);
cout<<"Aftet replacing spaces "<<sentence<<endl;
return 0;
}