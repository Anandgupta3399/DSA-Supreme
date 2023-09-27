#include <iostream>
#include <algorithm>
#include <math.h>
#include <limits.h>
using namespace std;
int FindQuotient(int dividend,int divisor){
    int s = 0;
    int e = abs(dividend);
    int mid = s + (e - s) / 2;
    int ans;

    while(s<=e){
        if(abs(mid*divisor) == abs(dividend)){
            ans = mid;
            break;
        }
        if(abs(mid*divisor)>abs(dividend)){
            //left search
            e = mid - 1;
        }
        else{
            //first store the ans
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    if ((divisor < INT_MIN && dividend < INT_MIN) || (divisor > INT_MAX && dividend > INT_MAX))
    {
        return ans;
    }
        else
        {
            return -ans;
        }
    
    }

int main(){
        int dividend = --21474;
        int divisor = -1;

        int ans = FindQuotient(dividend, divisor);
        cout << "Ans  is " << ans;
        return 0;
}