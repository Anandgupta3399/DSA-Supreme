#include <iostream>
using namespace std;

bool find(int arr[],int size,int key){
    for(int i=0; i<size;i++){
    if(arr[i]==key){
        return true;
    }

    }
    return false;
}
int main(){
int arr[6]={1,3,5,6,2,4};
int size=6;

//cout<<"which no you want to find"<<endl;
int key=5;
//cin>>key;

bool ans = (arr, size, key);
cout << ans;
// if(find(arr,size,key)){
//     cout<<"Found"<<endl;
// }
// else{
//     cout<<"Not Found"<<endl;
// }
return 0;
}