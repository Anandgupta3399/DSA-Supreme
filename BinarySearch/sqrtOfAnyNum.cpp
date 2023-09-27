#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int findSqrt(int n){
    int target = n;
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while(s<=e){
        if(mid*mid == target){
            return mid;
        }
        if(mid*mid>target){
            e = mid - 1;
        }
        else{
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans; 
}



double sqrtDouble(double n, int precision){
    int ans = sqrt(n);
    double step = 0.1;
    double finalAns = ans;
    for(int i=0; i<precision; i++){
        // int cnt = 0;
        // for(double j=finalAns; j*j<=n && cnt<10; j+=step){
        for(double j=finalAns; j*j<=n; j+=step){
            finalAns = j;
            // cnt++;
        }
        step = step/10;
    }
    return finalAns;
}

int main(){

    int n;
    cout << "Enter The Number " << endl;
    cin >> n;

    int ans = findSqrt(n);
    cout << "Sqrt of " << n << " is " << ans<<endl;


    

    //sqrt of an double number upto given precision
        // double n;
        // cin>>n;
        // int precision;
        // cin>>precision;
        // double ans = sqrtDouble(n, precision);
        // cout<<ans<<'\n';
    

    /*// using inbuilt sqrt function
        int n;
        cin>>n;
        cout << sqrt(n) << '\n';
    */

    return 0;
}

