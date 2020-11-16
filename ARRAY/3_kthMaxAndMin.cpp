/*
    Put all your eggs in one basket
    Author : Divya Singh
*/
#include<bits/stdc++.h>
using namespace std;


#define int  long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

//O(N * logN)
int kthMinimumSortingMethod1(int arr[] , int n , int k)
{
    sort(arr, arr + n);
    return (arr[k]);
}

//O(N * logK)
int kthMinimumSortingMethod2(int arr[] , int n , int k)
{
    priority_queue<int>pq;
    for (int i = 0  ; i < n ; i ++)
    {
        pq.push(arr[i]);
        if ((int)pq.size() > k)
        {
			pq.pop();
		}
    }

    return (pq.top());
}


signed main(){

	fast ;

	int test ;
	cin >> test ;
	while (test--)
	{
		//input
		int n , k ;
		cin >> n >> k;

		int arr[n];
		for (int i = 0 ; i < n ; i++)
		{
			cin >> arr[i];
		}

		//processing part
        int ans = kthMinimumSortingMethod1(arr , n , k);

        //output part
        cout << ans << endl;
	}
	return 0 ;
}
