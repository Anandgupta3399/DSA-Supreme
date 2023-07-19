#include <iostream>
#include <string.h>
using namespace std;

void permutationOfString(string &str,int i){
    if(i>=str.length()){
        // base case
        cout<<str<<" ";
        return;
    }
 //swapping
 for(int j=i;j<str.length();j++){
    //swap
    swap(str[i],str[j]);
    //recursive call
    permutationOfString(str,i+1);
      //backtracking - to recreate the original input string
      swap(str[i], str[j]);
 }
        
    }


int main(){
string str="abc";
int i=0;
permutationOfString(str,i);

return 0;
}