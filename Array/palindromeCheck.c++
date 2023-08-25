
// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check whether
// the string is palindrome
bool isPalindrome(string& S,int start, int end){

if(start>=end){
	return true;
}
if(S[start]!=S[end]){
	return false;
}

return isPalindrome(S, start + 1, end - 1);
}
// {
	// // Stores the reverse of the
	// // string S
	// string P = S;

	// // Reverse the string P
	// reverse(P.begin(), P.end());


	// if (S == P) {

	// 	return "Yes";
	// }

	// else {

	// 	return "No";
	// }


    //  for (int i = 0; i < S.length() / 2; i++) {
 
    //     // If S[i] is not equal to
    //     // the S[N-i-1]
    //     if (S[i] != S[S.length() - i - 1]) {
    //         // Return No
    //         return "No";
    //     }
    // }
    // // Return "Yes"
    // return "Yes";


// }

// Driver Code
int main()
{
	string S = "ABCDCBA";
	cout << isPalindrome(S,0,S.size()-1);

	return 0;
}

