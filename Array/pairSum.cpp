#include <iostream>
#include <vector>
using namespace std;
int pairSum(vector<int>arr,int target){
    vector<int> ans;
    for (int i = 0; i < arr.size();i++){
        int element = arr[i];
        for (int j = i + 1; j < arr.size();j++){
            if(element+arr[j]==target){
                cout <<"pair found:" <<element <<"," <<arr[j] << endl;
               
            }
        }
       
    }
}
int main(){
    vector<int> arr = {1, 3,5,7,2,4,6};
    int target = 9;
    pairSum(arr, target);
    return 0;
}