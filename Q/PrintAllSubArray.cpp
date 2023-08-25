#include <iostream>
#include <vector>
using namespace std;
void printSubArr_Util(vector<int>&nums,int start,int end){
    //base case
if(end==nums.size()){
    return;
}
for (int i = start; i <= end;i++){
    cout << nums[i] << "";
}
cout << endl;

printSubArr_Util(nums, start, end + 1);
}
void printSubArray(vector<int>&nums){
for (int start = 0; start < nums.size();start++){
    int end = start;
    printSubArr_Util(nums, start, end);
}
}
int main(){
    vector<int> nums{1, 2, 3, 4, 5};
    // printSubArr_Util(nums, 0, 0);
    printSubArray(nums);
    return 0;
}