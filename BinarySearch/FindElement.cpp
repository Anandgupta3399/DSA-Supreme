#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(int arr[],int size, int target){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        int element=arr[mid];
        
        if(element==target){
            return mid;
        }
            if(target<element){
                end=mid-1;
            }
        
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
// int arr[]={2,4,6,7,8,10,12,16};
// int size=8;
// int target=6;

// int indexOftarget=binarySearch(arr,size,target);

// if(indexOftarget==-1){
//     cout<<"target not found "<<endl;
// }
// else{
//     cout<<"target found at "<<indexOftarget <<" index " <<endl;
// }

  vector<int> v{1,2,3,4,5,6};
  int arr[] = {1,2,3,4,5,6,7,8 };
  int size = 9;

  if(binary_search(arr, arr + size, 9)) 
  // if(binary_search(v.begin(),v.end(),8)) 

  {
    cout << "Found" << endl;
  }
  else {
    cout << "Not found. " << endl;
  }

return 0;

}