#include <iostream>
#include <vector>
using namespace std;


void printVector(vector<int>arr){
    for(auto value : arr){
        cout << value << ' ';
    }
    cout<<'\n';
}

void sort0sand1s(vector<int>arr){
    int n = arr.size();
    // s is where we can insert next 0
    int s=0;
    // e is where we can insert next 1
    int e=n-1;
    // i is where we have to process    use for traversing
    int i=0;
    while(i<e){
        if(arr[i]==0){
            swap(arr[i],arr[s++]);
            i++;    // i always points to s
        }
        else{
            swap(arr[i],arr[e--]);
        }
    }
    printVector(arr);
}
int main(){

// vector<int> arr{0,1,0,1,1,0,1,0,1,1};
// 	int start = 0;
// 	int end = arr.size() -1;
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
	sort0sand1s(arr);
	// int i = 0;

	// while( i != end) {
	// 	cout << "for i="<<i<< " start="<<start <<" end="<< end << endl;
	// 	if(arr[i] == 0) {
	// 		cout << "found zero" << endl;
	// 		cout <<"before swap ";
	// 		printArray(arr);
			
	// 		swap(arr[start], arr[i]);
	// 		cout <<"after  swap ";
	// 		printArray(arr);
	// 		start++;
	// 		i++;
	// 		cout << "now i="<<i<< " start="<<start <<" end="<< end << endl;
	// 	}
	// 	else {
	// 		cout << "found One" << endl;
	// 		cout <<"before swap ";
	// 		printArray(arr);
	// 		swap(arr[end], arr[i]);
	// 		cout <<"after  swap ";
	// 		printArray(arr);
	// 		end--;
	// 					cout << "now i="<<i<< " start="<<start <<" end="<< end << endl;

	// 	}
	// }
	
	// //print
	// for(auto val : arr) {
	// 	cout << val << " ";
	// }
	
return 0;
}