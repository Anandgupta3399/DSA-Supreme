#include <iostream>
#include <vector>
using namespace std;

int FindPivot(vector<int>arr){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(s==e){
            return s;
        }
        if( mid+1<e && arr[mid]>arr[mid+1]){
            return mid;
        }
         if( mid-1>=s && arr[mid-1]>arr[mid]){
            return mid-1;
        }
         if(arr[s]>arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;


    }
    return -1;
}

int main(){
// vector<int>v{1,2,3,7,4,5};
vector<int>v{1,3};

int ans = FindPivot(v);
cout<<"ans is "<<ans<<endl;
return 0;
}