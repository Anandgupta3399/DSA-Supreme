#include <iostream>
#include <vector>
using namespace std;
int main(){
int arr1[]={1,2,3,4,5};
int size1=5;
int arr2[]={6,7,8,9};
int size2 = 4;

vector<int>ans;

for(int i=0; i<size1;i++){
ans.push_back(arr1[i]);
}

for(int i=0; i<size2;i++){
ans.push_back(arr2[i]);
}
for(int i=0;  i<ans.size();i++){
    cout<<ans[i]<<" ";
}
return 0;
}