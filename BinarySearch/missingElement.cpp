// find the missing element in sorted array having elements 1 to N+1 

#include<iostream>
#include<vector>
using namespace std;

// TC- O(logn)
int missingElement(vector<int>arr){
    int n = arr.size();
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = n+1;

    while(s<=e){
        int element = arr[mid];
        if(element == mid+2){
            ans = mid + 1;      // store in ans
            e = mid - 1;
        }
        else
            s = mid + 1;
        
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){

    
    vector<int>arr{1,2,4,5,6,7,8,9};
  

    int ans = missingElement(arr);
    cout << ans << '\n';

    return 0;
}
