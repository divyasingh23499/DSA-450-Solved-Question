#include <bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n){
        // Your code here
        if(n == 1)
        {
            return 0 ;
        }
        else if (arr[0] == 0)
        {
            return -1;
        }
        else 
        {
            // mxreachable is the variable which maximum index we can reach after taking a jump from the current index
            int mxReachable = arr[0];
            int steps = arr[0];
            int jump = 1;
            
            for (int i = 1 ; i < n ; i++)
            {
                if (i == n - 1)
                {
                    return jump;
                }
                mxReachable = max(mxReachable , i + arr[i]);
                steps--;
                if (steps == 0)
                {
                    jump++;
                    if (i >= mxReachable)
                    {
                        return -1;
                    }
                    steps = mxReachable - i;
                }
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

        int arr[n];
        for (int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
        }

        int result = minJumps(arr , n);
        cout << result << endl;
    }
    return 0;
}
