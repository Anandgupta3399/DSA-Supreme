#include <iostream>
#include <vector>
using namespace std;
int findUniqEle(vector<int>arr){
    int ans = 0;
    for (int i = 0; i < arr.size();i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
int main(){
    vector < int >arr= {1, 2, 4, 3, 1, 2, 4};
    int ans = findUniqEle(arr);
    cout << ans;
    return 0;
}