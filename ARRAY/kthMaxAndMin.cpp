#include<bits/stdc++.h>
using namespace std;


#define int  long long int 
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int kthMinimumSortingMethod(int arr[] , int n , int k)
{
    sort(arr, arr + n);
    return (arr[k]);
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
        int ans = kthMinimumSortingMethod(arr , n , k);
		
        //output part 
	   cout << ans << endl;
	}
	return 0 ;
}
