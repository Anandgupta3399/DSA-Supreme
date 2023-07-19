#include <iostream>
using namespace std;
int main(){
// int arr[4][4];
int brr[3][3]={
{1,2,3},
{4,5,6},
{7,8,9}
};
// cout<<brr[2][2]<<endl;
//Row wise print
// //outer loop
// for(int i=0; i<3; i++){
// //for every we need to print value in eaach column
// for(int j=0; j<3; j++){
//     cout<<brr[i][j]<<" ";
// }
// cout<<endl;
// }

//outer loop
// for(int i=0; i<3; i++){
// //for every we need to print value in eaach column
// for(int j=0; j<3; j++){
//     cout<<brr[j][i]<<" ";
// }
// cout<<endl;
// }
int arr[4][3];
int rows=4;
int cols=3;
for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cin>>arr[i][j];
    }
}
for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cout<<arr[i][j]<<" ";
    }
   cout<<endl;
}
return 0;
}