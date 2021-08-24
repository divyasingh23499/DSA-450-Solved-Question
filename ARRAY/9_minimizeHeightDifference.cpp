#include <bits/stdc++.h>
using namespace std;

int minimizeHeightDifference(int arr[] , int n)
{
    sort(arr, arr+n);
    int minEle, maxEle;
    int result = arr[n-1] - arr[0];
    
    for(int i = 1; i <= n-1; i++)
    {
        if(arr[i] >= k)
        {
            maxEle = max(arr[i-1] + k, arr[n-1] - k);
            minEle = min(arr[0] + k, arr[i] - k);
            
            result = min(result, maxEle-minEle);
        }
    }
    return result;
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

        int result = minimizeHeightDifference(arr , n);
        cout << result << endl;
    }
    return 0;
}
