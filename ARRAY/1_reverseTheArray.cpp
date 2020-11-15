#include<bits/stdc++.h>
using namespace std;

#define int  long long int 
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void reverseTheArray(int arr[] , int sizeOfArray)
{
	for (int i = 0  ; i < ((sizeOfArray + 1 ) / 2) ; i ++)
	{
		swap(arr[i], arr[sizeOfArray - i - 1]);
	}
}

signed main(){

	fast ;
	int test ;
	cin >> test;
	while (test--)
	{
		int n ;
		cin >> n ; 
		int arr[n];
		//input 
		for (int i = 0 ; i < n ; i++)
		{
			cin >> arr[i];
		}
		
		// processing 
		reverseTheArray(arr , n);
		
		//output
		for (int i = 0 ;  i < n ; i ++)
		{
			cout << arr[i] << " " ; 
		}
		cout << endl;
	}
}
