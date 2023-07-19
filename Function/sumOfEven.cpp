#include <iostream>
using namespace std;

int getEvenSum(int n) {
	cout << "inside getEveSum Fiunction" << endl;
	cout << "Vlaue of n is " << n << endl;
	
	int sum = 0 ;
	cout << "Initial value of sum is " << sum << endl;
	for(int i = 2; i<=n; i = i + 2) {
		cout << "for value of i: " << i << endl;
		sum = sum + i;
		cout << "sum now become: " << sum << endl;
	}
	cout << "returning sum = " << sum << endl;
	return sum;
}
// int SumOfEven(int a){
//     int sum=0;
//     for(int i=2;i<=a; i+2){
//         sum=sum+i;
//     }
//     return sum;

int main(){
    int n;
	cout << "Enter the value of n " << endl;
	cin >> n;

	cout << "Calling getEvenSum function " << endl;
	int ans = getEvenSum(n);
	cout << "Even sum is  " << ans << endl;
// int n;
// cin>>n;
// int SoE=SumOfEven(n);
// cout<<SoE;
return 0;
}