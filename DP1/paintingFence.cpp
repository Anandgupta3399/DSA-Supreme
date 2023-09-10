#include <iostream>
#include <vector>
using namespace std;
int solveUsingRec(int n,int k){
    if(n==0)
        return 0;
        if(n==1)
        return k;
        if(n==2){
        return (k + k * (k - 1));//k square
        }
        int ans = (solveUsingRec(n - 2, k) + solveUsingRec(n - 1, k)) * (k - 1);
        
}
int solveUsMem(int n,int k ,vector<int>&dp){
        if (n == 1)
        {
        return k;
        }
        if (n == 2)
        {
        return (k + k * (k - 1));
        }

        if (dp[n] != -1)
        return dp[n];

        dp[n] = (solveUsMem(n - 2, k, dp) + solveUsMem(n - 1, k, dp)) * (k - 1);
        return dp[n];
}
int solveUsingTab(int n, int k)
{
        vector<int> dp(n + 1, 0);
        dp[1] = k;
        dp[2] = (k + k * (k - 1));

        for (int i = 3; i <= n; i++)
        {

        dp[i] = (dp[i - 2] + dp[i - 1]) * (k - 1);
        }
        return dp[n];
}
int solveSO(int n, int k)
{

        int prev2 = k;
        int prev1 = (k + k * (k - 1));

        for (int i = 3; i <= n; i++)
        {

        int curr = (prev2 + prev1) * (k - 1);

        // shhift -> yaha hi galti karunga ya karungi
        prev2 = prev1;
        prev1 = curr;
        }
}

        int main()
        {
        int n = 4;
        int k = 3;

        // int ans = solveUsingRec(n, k);
        // cout << "ans:" << ans << endl;

        // vector<int> dp(n + 1, -1);
        // int ans = solveUsMem(n, k,dp);
        // cout << "ans:" << ans << endl;

        int ans = solveSO(n, k);
        cout << "ans: " << ans << endl;

        return 0;
        }