#include <iostream>
using namespace std;
int main(){
int n; 
cin>>n;
 for (int row =0; row<n; row++){
    for (int col=0; col<n-row; col++){
        cout<< "*";
    }
    for(int col=0;col<2*row+1; col++){
        cout<<" ";
    }
    for(int col=0; col<n-row;col++){
        cout<< "*";
    }
     cout<<endl; 
 }
  for(int row=0; row<n; row = row + 1) {
	// 	//half pyrmaid
		for(int col =0; col<row+1; col = col + 1) {
			cout << "*";
		}

		//space wlaa full puramid 
		for(int col=0; col<2*n-2*row-1; col = col + 1) {
			cout <<" ";
		}
		
		//half pyramid
		for(int col =0; col<row+1; col = col + 1) {
			cout << "*";
		}
		cout << endl;
  }
return 0;
}