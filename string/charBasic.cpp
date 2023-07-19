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


int main(){
char name[100];
cin>>name;
cout<<"Length is "<<getlength(name)<<endl;
cout<<"Length is "<<strlen(name)<<endl;

// char ch[100];
// cout<<"Enter the name";
// // cin>>ch;
// cin.getline(ch,100);
// cout<<ch;

// char arr[50];
// cin>>arr;
// cout<<arr[3];


return 0;
}