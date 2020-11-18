/*
    Put all your eggs in one basket
    Author : Divya Singh
*/
#include<bits/stdc++.h>
using namespace std;

#define int  long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

//O(n) Kadane's algorithm
int largestContiguousSum(int arr[] , int sizeOfArray)
{   
    int mx = INT_MIN , sum = 0;
    for (int i = 0  ; i < sizeOfArray ; i++)
    {
        sum = max(sum + arr[i] , arr[i]);
        mx = max(mx , sum);
    }
    
    return mx ;        
}

signed main(){

    fast ;
    int test ;
    cin >> test;
    while (test--)
    {
        //input part
        int n ; 
        cin >> n ;

        int arr[n];
        for (int i = 0 ;  i < n ;  i++)
        {
            cin >> arr[i];
        }

        //processing part
        int ans = largestContiguousSum(arr , n);

        //output part
        cout << ans << endl;
    }
}
