#include <iostream>
#include <limits.h>
using namespace std;

int getMini(int arr[][3],int rows,int cols){
    int mini=INT_MAX;
       for(int i=0; i<rows; i++){
        for(int j=0; j<cols;j++){
            if(arr[i][j]<mini){
                mini=arr[i][j];
            }
        }
    }
    return mini;
}
int getMaxi(int arr[][3],int rows,int cols){
    int maxi=INT_MIN;
       for(int i=0; i<rows; i++){
        for(int j=0; j<cols;j++){
            if(arr[i][j]>maxi){
                maxi=arr[i][j];
            }
        }
    }
    return maxi;
}

bool findKey(int arr[][3],int rows,int cols, int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols;j++){
            if(arr[i][j]==key){
                return true;
            }
        }
    }
    return false;
}

void PrintRowSum(int arr[][3],int rows,int cols){
    cout<<"sum= "<<endl;
    for(int i=0; i<rows; i++){
            int sum=0; 
        for(int j=0; j<cols; j++){
            sum = sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
}
int main(){
int arr[3][3];
int rows=3;
int cols=3;
for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cin>>arr[i][j];
    }
}
for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cout<<arr[i][j]<<" ";
    }
   cout<<endl;
}
// PrintRowSum(arr,rows,cols);
// int key =44; 
// if(findKey(arr,rows,cols,key)){
//     cout<<"true";
// }
// else{
//     cout<<"false";
// }
int ans=getMini(arr,rows,cols);
cout<<"mini is "<<ans<<endl;
 cout<<"maxi is " <<getMaxi(arr,rows,cols)<<endl;
return 0;
}