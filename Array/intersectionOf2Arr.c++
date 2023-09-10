#include <iostream>
#include<limits.h>
#include <vector>
using namespace std;
int main(){
    vector<int> arr1 = {1, 2,-1, 3, 4, 4, 6, 7};
    vector<int> arr2 = {10, 11,-1, 22, 3, 4, 4, 5};
    vector<int> ans;
    for (int i = 0; i < arr1.size();i++){
        int element = arr1[i];
        for (int j = 0; j < arr2.size();j++){
            
            if(arr2[j]==element){
                // mark  qki dubara koi or num se match na ho j
                arr2[j] = INT_MIN;
                ans.push_back(element);
            }
        }
    }
    for(auto value:ans){
        cout << value<<" ";
    }
        return 0;
}