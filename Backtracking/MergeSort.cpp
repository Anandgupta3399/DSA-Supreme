#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>&arr){
    for(int i=0; i<arr.size(); i++)
        cout << arr[i] << ' ';
    cout << '\n';
}

void merge2SortedArrays(vector<int>&arr, int s, int e){
    int mid = s + (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;
    
    vector<int>left(len1);
    vector<int>right(len2);

    int j=0;
    for(int i=s; i<=mid; i++)
        left[j++] = arr[i];

    j=0;
    for(int i=mid+1; i<=e; i++)
        right[j++] = arr[i];

    j=0;
    int i=0;
    int k=s;
    while(i<len1 && j<len2){
        if(left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }

    while(i<len1)
        arr[k++] = left[i++];
    
    while(j<len2)
        arr[k++] = right[j++];

}

void mergeSort(vector<int>&arr, int s, int e){
    if(s>=e)        
        return;
    
    int mid = s + (e-s)/2;
    //left part sort
    mergeSort(arr, s, mid);
    //right part sort
    mergeSort(arr, mid+1, e);
    //merge two sorted array
    merge2SortedArrays(arr, s, e);
}


int main(){

    /*
    */
    // merge sort
        vector<int>arr{7,3,2,16,2,2,2,2,2,24,4,11,9};
        int s = 0;
        int e = arr.size()-1;
        mergeSort(arr, s, e);
        printVector(arr);
 
    return 0;
}

// void merge(int*arr, int s, int e){
//     int mid = (s+e)/2;

//     int leng1= mid-s+1;
//     int leng2=e-mid;

//     int*left= new int[leng1];
//     int*right = new int[leng2];

//     //copy left values
//     int k=s;
//     for(int i=0;i<leng1;i++){
//         left[i]=arr[k];
//         k++;
//     }
//     //copy right values
//     k=mid+1;
//     for(int i=0; i<leng2;i++){
//         right[i]=arr[k];
//         k++;
//     }

//     //metge logic
//     int leftIndex=0;
//     int rightIndex=0;
//     int mainArrayIndex= s;

//      while(leftIndex<leng1 && rightIndex<leng2){
//         if(left[leftIndex]<right[rightIndex]){
//             arr[mainArrayIndex++]=left[leftIndex++];
          
//         }
//         else{
//             arr[mainArrayIndex++]=right[rightIndex++];

//         }
//      }

//      //copy logic for left Array
//      while(leftIndex<leng1){
//          arr[mainArrayIndex++]=left[leftIndex++];
//      }

//          //copy logic for left Array
//      while(rightIndex<leng2){
//          arr[mainArrayIndex++]=right[leftIndex++];
//      }
// }

// void MergeSort(int* arr,int s, int e){
// //base case
// if(s>=e)
// return;
// int mid=(s+e)/2;

// //left part sort
// MergeSort(arr,s,mid);
// //right part sort
// MergeSort(arr,mid+1,e);

// //merge two sorted array
// MergeSort(arr,s,e);
// }

// int main(){
// int arr[]={4,5,13,2,12};
// int n=5;
// int s=0;
// int e=n-1;
// MergeSort(arr,s,e);

// for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;

// return 0;
// }