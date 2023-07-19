#include <iostream>
#include <vector>
using namespace std;

int peakElement(vector<int>arr){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return end;
}
int findPeakElement(vector<int>&arr){
    return peakElement(arr);
}
int main(){
// vector<int>v{1, 2, 3 ,4 ,5, 6, 5, 4, 3, 2, 1};
vector<int>v{0,10,5,2};
int ans=findPeakElement(v);
cout<<ans<<endl;

return 0;
}