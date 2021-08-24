#include <bits/stdc++.h>
using namespace std;

// Merge ar1[] and ar2[] with O(1) extra space
void merge(int ar1[], int ar2[], int m, int n)
{
    // Iterate through all elements
    // of ar2[] starting from the last element
    for (int i = n - 1; i >= 0; i--)
    {
        /* Find the smallest element greater than ar2[i].
        Move all elements one position ahead till the
        smallest greater element is not found */
        int j, last = ar1[m - 1];
        for (j = m - 2; (j >= 0 && ar1[j] > ar2[i]) ; j--)
            ar1[j + 1] = ar1[j];
 
        // If there was a greater element
        if (j != m - 2 || last > ar2[i])
        {
            ar1[j + 1] = ar2[i];
            ar2[i] = last;
        }
    }
}
 
int main()
{
    int t = 1;
    //cin >> t ;

    while(t--)
    {
        int n ;
        cin >> n ;

        int arr1[n];
        for (int i = 0 ; i < n ; i++)
        {
            cin >> arr1[i];
        }

        int m ;
        cin >> m ;

        int arr2[m];
        for (int i = 0 ;  i< m ; i++)
        {
            cin >> arr2[i];
        }

        merge(arr1 , arr2 ,n ,  m);
        for (int i = 0 ;  i< n ; i++)
        {
            cout << arr1[i] << " ";
        }

        cout << endl;

        for (int i = 0 ;  i< m ; i++)
        {
            cout << arr2[i] << " ";
        }
        
    }
    return 0;
}
