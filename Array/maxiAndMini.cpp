#include <iostream>
#include <limits.h>
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

int arr[]= {2,4,6,1,3,7,9,12,56,77,43,21};
int size=12;

int maxi = INT_MIN;
int mini = INT_MAX;

for(int i=0; i<size; i++){
    if(arr[i]<mini){
        mini=arr[i];
    }
    if(arr[i]>maxi){
       maxi=arr[i];
    }
}

cout<<"minimum number is "<<mini<<endl;

cout<<"maximum number is "<<maxi<<endl;

findMinAndMax(arr,size);
return 0;
}