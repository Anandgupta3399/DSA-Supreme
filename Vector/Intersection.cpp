#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main(){
vector<int> arr{89, 24, 75, 11, 23};
vector<int> brr{89, 2, 4};
vector<int> ans;

for(int i=0; i<arr.size();i++){
    int element = arr[i];
    for(int j=0; j<brr.size();j++){
        if(element == brr[j]){
            brr[j]=INT_MIN;
            ans.push_back(element);
        }
    }
}
for(auto value:ans){
    cout<<value<<" ";
}
cout<<endl;
return 0;
}