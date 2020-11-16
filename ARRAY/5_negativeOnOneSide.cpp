/*
    Put all your eggs in one basket
    Author : Divya Singh
*/
#include<bits/stdc++.h>
using namespace std;

#define int  long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

//O(N) QuickSort Particition
void negativeOneSideMethod1(int arr[] , int sizeOfArray)
{
    int index = 0 ;
    for (int i = 0  ; i < sizeOfArray ; i ++)
    {
        if (arr[i] < 0)
        {
            swap(arr[i] , arr[index++]);
        }
    }
}

//O(N) Two Pointer
void negativeOneSideMethod2(int arr[] , int sizeOfArray)
{
    int left = 0 , right = sizeOfArray - 1;
    while (left <= right)
    {
        //if both negative Shift left
        if (arr[left] < 0 && arr[right] < 0)
        {
            left++;
        }
        //if left is positive and right is negative then swap
        else if (arr[left] > 0 && arr[right] < 0)
        {
            swap(arr[left++] , arr[right--]);
        }
        //if both is positive then shift right
        else if (arr[left] > 0 && arr[right] > 0)
        {
            right--;
        }
        //if left is negative and right is positive no nedd to change shift both the pointers
        else
        {
            left ++ ;
            right --;
        }
    }
}

signed main(){

    fast ;
    int test = 1;
    //cin >> test;
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
        negativeOneSideMethod2(arr , n);

        //output
        for (int i = 0 ;  i < n ; i ++)
        {
            cout << arr[i] << " " ;
        }
        cout << endl;
    }
}
