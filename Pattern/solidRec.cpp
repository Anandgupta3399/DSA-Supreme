#include <iostream>
using namespace std;
int main(){
int r;
cin>>r;
int c;
cin>>c;
for(int row=0;row<r;row++){
    for (int col=0;col<c;col++){
        cout<<'*';
    }
    cout<<endl;
}
return 0;
}