#include <iostream>
using namespace std;
#include <vector>

int findUnique(vector <int> arr){
int ans = 0;
for(int i=0; i<arr.size();i++){
    ans = ans^arr[i];
} 
return ans;
}

int main(){

int n; 
cin>>n;
vector<int> arr(n);
cout<<"Enter the elements "<<endl;
for(int i=0; i<arr.size();i++){
    cin>>arr[i];
}
int UniqueElement = findUnique(arr);
cout<<"Unique ELement is "<<UniqueElement<<endl;
return 0;
}