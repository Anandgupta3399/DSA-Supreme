#include <iostream>
using namespace std;
int fact(int n){
    int ans=1;
    for(int i=1; i<=n; i++){
        cout<<i<<endl;
      ans = ans*i;
    }
    return ans;
}
int main(){
int n;
cin>>n;
cout<<"the factorial of "<<n<< " is "<<fact(n);

return 0;
}