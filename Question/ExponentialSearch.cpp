#include <iostream>
using namespace std;

int bs(int arr[],int start , int end, int x){
   while (start<=end)
   {
       int mid = (start + end) / 2;
       if(arr[mid]==x){
           return mid;
       }
       else if(x>arr[mid]){
           start = mid + 1;
       }
       else{
           end = mid - 1;
       }
       /* code */
   }
   return -1;
}

int exponentSearch (int arr[], int n , int x){
if(arr[0]==x)
return 0;
int i = 1;
while(i<n && arr[i]<=x){
i = i * 2;
}
return bs(arr, i / 2, min(i, n - 1), x);

}
int main()
{
    int a[] = {3, 4, 5, 6, 11, 13, 15, 17, 36, 56};
    int n = sizeof(a) / sizeof(int);
    int x = 36;
    int ans = exponentSearch(a, n, x);
    cout << ans << endl;
    return 0;
}