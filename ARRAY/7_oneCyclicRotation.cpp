/*
    Put all your eggs in one basket
    Author : Divya Singh
*/
#include<bits/stdc++.h>
using namespace std;

#define int  long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

//O(n)
void oneTimeCyclicRotation(int arr[] , int sizeOfArray)
{   
    int lastElement = arr[sizeOfArray - 1];
    for (int i = sizeOfArray - 1; i >= 1; i--) 
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = lastElement;
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
        oneTimeCyclicRotation(arr , n);

        //output part
        for (int i = 0 ;  i < n ;  i++)
        {
            cout << arr[i] << " ";
        }
    }
}
