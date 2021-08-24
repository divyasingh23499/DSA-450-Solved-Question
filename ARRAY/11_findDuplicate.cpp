#include <bits/stdc++.h>
using namespace std;

int findDuplicate(int arr[] , int n)
{
    map<int,int>mp;
    for (int i = 0 ;  i< n ; i++)
    {
        mp[arr[i]]++;
    }

    int ans = 0;
    for (map<int,int>::iterator it = mp.begin() ;it != mp.end() ; it ++)
    {
        if (it == 2)
        {
            ans = it -> first ;
            break;
        }
    }
    return ans ;
}

int findDuplicateSecondApproch(int nums[] , int n)
{
    int duplicate = -1;
    for (int i = 0 ; i < n ; i++)
    {
        int curr = abs(nums[i]);
        if (nums[curr] < 0)
        {
            duplicate = curr;
            break;
        }
        nums[curr] *= -1;
    }
    return duplicate;
    
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
