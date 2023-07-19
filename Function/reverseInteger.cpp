#include <iostream>
using namespace std;
#include <bits/stdc++.h>


// int ReverseInteger(int x){
//     int ans=0;
// while(x>0){
//     int lastdigit=x%10;
//     if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
//         return true;
//     }
//  ans=(ans*10)+lastdigit;
//     x=x/10;
// }
// return ans;
// }

int getReverse2(int n){
    string s = to_string(n);
    reverse(s.begin(), s.end());
    int ans = stoi(s);
    return ans;
}

int main(){
int x;
cin>>x;
// int ans=ReverseInteger(x);
// cout<<ans<<endl;

 int ans2 = getReverse2(x);
    cout << ans2 <<'\n';

return 0;
}
