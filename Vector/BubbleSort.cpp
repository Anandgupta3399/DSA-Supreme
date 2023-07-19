#include <iostream>
#include <vector>
using namespace std;
int bubbleSort(vector<int>arr){
    int n=arr.size();
    for(int i=1; i<n; i++){
        int swapCount=0;
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapCount++;
            }

        }
        if(swapCount==0){
            break;
        }
        
     }
      for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   
}

int main(){

vector<int>arr{10,1,7,6,14,9};
int ans=bubbleSort(arr);
cout<<ans<<endl;

return 0;
}