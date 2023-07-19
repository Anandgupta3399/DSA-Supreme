#include <iostream>
#include <limits.h>
using namespace std;

void findMax(int arr[], int n, int i, int& maxi ){
    if(i>=n){
        return;
    }
    if(arr[i]>maxi){
        maxi=arr[i];
    }
    findMax(arr,n,i+1,maxi);
}
void findMin(int arr[], int n, int i, int& mini ){
    if(i>=n){
        return;
    }
    // if(arr[i]<mini){
    //     mini=arr[i];
    // }
  mini = min(mini, arr[i]);

    findMin(arr,n,i+1,mini);
}

int main(){
int arr[5]={10,30,20,40,50};
int n=5;
int i=0;

int maxi = INT_MIN;
int mini = INT_MAX;

findMax(arr,n,i,maxi);
findMin(arr,n,i,mini);

cout<<"Maximum Number is:"<<maxi<<endl;
cout<<"Minimum NUmber is:"<<mini<<endl;
return 0;
}