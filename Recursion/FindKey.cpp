#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

void checkKey(string& str,int i, int& n, char& key,vector<int>& ans) {
        //base case
        if(i >= n) {
                //key not found
                return;
        }
        //1 case solve krdo
        if(str[i] == key) {
                ///store in vector
              ans.push_back(i);
            //   count++;
            // return i;
            // cout<<"found at "<<i<<endl;
        }
               
        //baaki recursion sambhal lega
       return checkKey(str, i+1, n, key,ans);
}

int main() {
        string str = "lovebabbar";
        int n = str.length();

        char key = 'b';
        
        vector<int> ans;

        int i = 0;
        int count = 0;

         checkKey(str,i, n, key,ans);

        //  cout << ans << endl;

        // cout << count << endl;



        cout << "printing ans" << endl;
        for(auto val: ans) {
                cout << val << " " ;
        }
        cout << endl;
        

        return 0;
}