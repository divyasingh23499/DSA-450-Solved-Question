#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[] , int n)
{
    int dp[n + 1] = {0};
    for (int i =  1 ; i <= n ; i++)
    {
        dp[i] = max(dp[i] , dp[i - 1]);
        if (i - 2 >= 0)
        {
            dp[i] = max(dp[i] , dp[i - 2] + arr[i - 1]);
        }
        dp[i] = max(dp[i] , arr[i - 1]);
    }
    return dp[n];
}
int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n ;

        int arr[n];
        for (int i = 0 ;  i < n ;i++)
        {
            cin >> arr[i];
        }

        int result = maxSum(arr , n);
        cout << result ;
    }
    return 0;
}
