class Solution {
public:
    
    int recSol(int n){
        //base case
         if(n==0 || n==1)
     return n;
    
    int ans = fib(n-1) + fib(n-2);
    return ans;
    }

   int topDownSol(int n, vector<int>& dp){
       //base case
       if(n==1 || n==0){
           return n;
       }
       //check if ans already exist
       if(dp[n]!=-1){
           return dp[n];
       }
       //replace ans with dp[n]
       dp[n]=topDownSol(n-1,dp) + topDownSol(n-2,dp);
       return dp[n];
   }

   int bottomUpSol(int n){
       vector<int>dp(n+1,-1);
       //base case
       dp[0]=0;
       if(n==0)
       return dp[0];
       dp[1]=1;
       for(int i=2;i<=n;i++){
           dp[i]=dp[i-1] + dp[i-2];
       }
       return dp[n];
   }

   int spaceOptSol(int n){
       //base case
       int prev2 = 0;
       int prev1 = 1;

       if(n==0)
       return prev2;
       if(n==1)
       return prev1;
       
       int curr;
       for(int i=2; i<=n; i++){
           curr  = prev2 + prev1;
           //shifting
           prev2 = prev1;
           prev1 = curr;
       }
       return curr;
   }


    int fib(int n) {

    // return recSol(n);

    //  vector<int>dp(n+1,-1);
    //  int ans = topDownSol(n,dp); 
    //  return ans;

    // return bottomUpSol(n);

    return spaceOptSol(n);

    }
};