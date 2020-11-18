/*
    Put all your eggs in one basket
    Author : Divya Singh
*/
#include<bits/stdc++.h>
using namespace std;

#define int  long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

//O(n*longn + m*logm + n)
int intersectionMethod1(int arr[] , int n , int brr[] , int m)
{   
    int i = 0, j = 0 , count = 0;
    while (i < n && j < m) 
    {
        if (arr[i] > brr[j]) 
        {
            j++;
        }
        else if (brr[j] > arr[i]) 
        {
            i++;
        }
        else 
        {
            // when both are equal
            count++;
            i++;
            j++;
        }
    }    
    return count ;
}

signed main(){

    fast ;
    int test ;
    cin >> test;
    while (test--)
    {
        //input part
        int n , m ;
        cin >> n >> m ;

        int arr[n] , brr[m];
        for (int i = 0 ;  i < n ; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0;  i < m ; i++)
        {
            cin >> brr[i];
        }

        //processing part
        sort(arr , arr + n);
        sort(brr , brr + m);
        int ans = intersectionMethod1(arr , n , brr , m);

        //output part
        cout << ans << endl;
    }
}
