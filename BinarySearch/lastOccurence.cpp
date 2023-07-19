#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int lastOccurence(vector<int>v,int target){
int s=0;
int e=v.size()-1;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e){
    if(v[mid]==target){
     ans=mid;
     s=mid+1;
    }
    else if(target<v[mid]){
        e=mid-1;
    }
    else if(target>v[mid]){
        s=mid+1;
    }
    mid=s+(e-s)/2;
}
return ans;
}
int main(){
vector<int>v{1,2,3,4,4,4,4,4,6,7,8};
int target=4;
int ans=lastOccurence(v,target);
cout<<"ans "<<ans<<endl;

auto ans2= upper_bound(v.begin(),v.end(),target);
cout<<"ans2 is "<<ans2-v.begin() <<endl;
return 0;
}