#include <iostream>
#include <vector>
using namespace std;
int pairSum(vector<int>arr,int target){

    for(int i=0; i<arr.size();i++){
        int element=arr[i];
        for(int j=i+1;j<arr.size();j++){
            if(element+arr[j]==target){
                cout<<"Pair FOund " << element <<"," << arr[j] << endl;
            }
        }
    }
}
int main(){
vector<int>arr{10,20,40,60,70};
int target=80;
pairSum(arr,target);
return 0;
}