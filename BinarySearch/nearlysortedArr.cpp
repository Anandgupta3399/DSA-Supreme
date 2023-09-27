#include <iostream>
#include <vector>
using namespace std;

//nearly sorted means index of i elements lies in -i-1, i , i+1

int nearlySortedFind(vector<int> arr,int target){
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
   
   while(s<=e){
    if(arr[mid] == target){
        return mid;
    }
    if(mid-1>=s && arr[mid-11]==target){
        return mid - 1;
    }
    if(mid+1<=e && arr[mid+1]==target){
        return mid + 1;
    }
    if(target>arr[mid]){
        //right search
        s = mid + 2;
    }
    else{
        //left search
        e = mid - 2;
    }
    mid = s + (e - s) / 2;
   }
   return -1;
}

int main(){
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int target = 3;
    int ans = nearlySortedFind(arr, target);
    cout << "index of " << target << " is " << ans;
    return 0;
}

