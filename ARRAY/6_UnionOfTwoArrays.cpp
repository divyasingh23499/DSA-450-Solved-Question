/*
    Put all your eggs in one basket
    Author : Divya Singh
*/
#include<bits/stdc++.h>
using namespace std;

#define int  long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int unionMethod1(int arr[] , int n , int brr[] , int m)
{   
    set<int>s;
    for (int i = 0 ;  i < n ; i ++)
    {
        s.insert(arr[i]);
    }
    for (int i = 0 ;  i < m ; i ++)
    {
        s.insert(brr[i]);
    }

    return (s.size());
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
        int ans = unionMethod1(arr , n , brr , m);

        //output part
        cout << ans << endl;
    }
}
