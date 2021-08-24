#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n)
{
        
    // Your code here
    int mxSum = INT_MIN , sum = 0;
    for (int i = 0  ; i < n ; i++)
    {
        sum = max(sum + arr[i] , arr[i]);
        mxSum = max(sum , mxSum);
    }
    return mxSum;
}

int main()
{
    int t = 1;
    //cin >> t ;

    while(t--)
    {
        int n ;
        cin >> n ;

        int arr[n];
        for (int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
        }

        int result = findDuplicateSecondApproch(arr , n);
        cout << result << endl;
    }
    return 0;
}
