
// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check whether
// the string is palindrome
string isPalindrome(string S)
{
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
     for (int i = 0; i < S.length() / 2; i++) {
 
        // If S[i] is not equal to
        // the S[N-i-1]
        if (S[i] != S[S.length() - i - 1]) {
            // Return No
            return "No";
        }
    }
    // Return "Yes"
    return "Yes";
}

// Driver Code
int main()
{
	string S = "ABCDCBA";
	cout << isPalindrome(S);

	return 0;
}

