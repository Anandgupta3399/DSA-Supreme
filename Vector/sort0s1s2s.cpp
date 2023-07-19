#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>arr){
    for(auto value : arr){
        cout << value << ' ';
    }
    cout<<'\n';
}

void sort0sand1s2(vector<int>arr){
    int n = arr.size();
    int s=0, e=n-1;
    while(s<e){
        // all elements before s are 0
        if(arr[s]==0)
            s++;
        // all elements after e are 1
        else{
            swap(arr[s], arr[e]);
            e--;
        }
    }
    printVector(arr);
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
	sort0sand1s2(arr);
return 0;
}