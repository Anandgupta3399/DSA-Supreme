#include <iostream>
using namespace std;
int factorail(int n){
    if(n==1){
        return 1;
    }
    int smallPoblem=factorail(n-1);
    int bigProblem=n*smallPoblem;
    return bigProblem;
}
int main(){
int n=5;
int ans=factorail(n);
cout<<"Factorial of "<<n<<" is "<<ans<<endl; 
return 0;
}