#include <iostream>
#include <vector>
using namespace std;
int sort0sAnd1s(vector<int>arr){
    int start = 0;
    int end = arr.size();
    int i = 0;
    while(i!=end){
        if(arr[i]==0){
            swap(arr[start], arr[i]);
            start++;
            i++;
         
        }
       else{
            swap(arr[end], arr[i]);
            end--;
       }
      
       }
       for (auto value : arr)
       {
       cout << value << " ";
       }
    }
   
int main()
{
    vector<int> arr{0, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1};
    sort0sAnd1s(arr);
    return 0;
}