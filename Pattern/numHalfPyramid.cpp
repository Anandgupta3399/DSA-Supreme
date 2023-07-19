#include <iostream>
using namespace std;
int main(){
// int n;
// cin>>n;
// for(int i=1; i<=n; i++){
//     for(int j=1;j<=i;j++){
//         cout<<j;
//     }
//     cout<<endl;
// }
// int n;
// cin>>n;
// for (int row=0; row<n; row++){
//     for( int col =0; col<row+1;col++){
//         cout<<col+1;
//     }
//     cout<<endl;
// }
int n; 
cin>>n;
for(int i=0; i<n; i++){
    for(int j=0; j<i+1; j++){
        cout<<j+1;
    }
    cout<<endl;
}
return 0;
}