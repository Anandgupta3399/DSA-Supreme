#include <iostream>
using namespace std;
int findMinAndMax(int arr[],int n){
    //  if(arr[i] == NULL || arr[i]==0){
    //  return;}
    int min=arr[0];
    int max=arr[0];
    for(int i=1; i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<< "min is "<<min<<endl;
    cout<<"max is "<<max<<endl;
}
int main(){
int arr[]={6,2,3,4,1,9};
int n = sizeof(arr)/sizeof(arr[0]);
findMinAndMax(arr,n);
return 0;
}