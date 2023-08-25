#include <iostream>
#include <string.h>
using namespace std;

bool checkPalindrome(char word[]){
    int i=0;
    int n=strlen(word);
    int e=n-1;
    for(int i=0; i<n; i++){
        if(word[i]!=word[e]){
          return false;
        }
        else{
            i++;
            e--;
        }

    }
    return true;

}

int main(){
char word[100]="noon";
cout<<"is palindrome: "<<checkPalindrome(word)<<endl;
return 0;
}