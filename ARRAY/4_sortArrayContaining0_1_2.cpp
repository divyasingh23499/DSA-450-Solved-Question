/*
    Put all your eggs in one basket
    Author : Divya Singh
*/
#include<bits/stdc++.h>
using namespace std;

#define int  long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

//O(N * logN)
void sortArrayContaining_0_1_2_Method1(int arr[] , int sizeOfArray)
{
    sort(arr , arr + sizeOfArray);
}

//O(N)
void sortArrayContaining_0_1_2_Method2(int arr[] , int sizeOfArray)
{
    int cntZero = 0 , cntOne = 0 , cntTwo = 0;
    for (int i = 0 ;  i < sizeOfArray ; i ++)
    {
        if (arr[i] == 0)
        {
            cntZero++;
        }
        else if (arr[i] == 1)
        {
            cntOne++;
        }
        else 
        {
            cntTwo++;
        }
    }

    int index = 0 ;
    while (cntZero--)
    {
        arr[index++] = 0;
    }

    while (cntOne--)
    {
        arr[index++] = 1;
    }

    while (cntTwo--)
    {
        arr[index++] = 2;
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
        sortArrayContaining_0_1_2_Method2(arr , n);

        //output
        for (int i = 0 ;  i < n ; i ++)
        {
            cout << arr[i] << " " ;
        }
        cout << endl;
    }
}