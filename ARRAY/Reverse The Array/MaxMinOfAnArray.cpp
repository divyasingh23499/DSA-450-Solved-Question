#include<bits/stdc++.h>
using namespace std;


#define int  long long int 
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

struct Pair  
{ 
    int min; 
    int max; 
};  
  

//finding min and maximum from an array 
//this is basic function on the basis of iteration 
// no of comparisons : (2*n - 2);
struct Pair getMinMax(int arr[], int n) 
{ 
    struct Pair minmax;      
  
    if (n == 1) 
    { 
        minmax.max = arr[0]; 
        minmax.min = arr[0];      
        return minmax; 
    }  

    if (arr[0] > arr[1])  
    { 
        minmax.max = arr[0]; 
        minmax.min = arr[1]; 
    }  
    else
    { 
        minmax.max = arr[1]; 
        minmax.min = arr[0]; 
    }  
      
    for(int i = 2; i < n; i++) 
    { 
        if (arr[i] > minmax.max)      
        {
        	minmax.max = arr[i];
        } 
              
        else if (arr[i] < minmax.min)      
        {
        	minmax.min = arr[i];
        } 
    } 
    return minmax; 
} 


//this is recursive solution 
// no od comparisons : (1.5 *n - 2)
struct Pair getMinMax(int arr[], int low, int high) 
{ 
    struct Pair minmax, mml, mmr;      
    int mid; 
    
    if (low == high) 
    { 
        minmax.max = arr[low]; 
        minmax.min = arr[low];      
        return minmax; 
    }  

    if (high == low + 1) 
    {  
        if (arr[low] > arr[high])  
        { 
            minmax.max = arr[low]; 
            minmax.min = arr[high]; 
        }  
        else
        { 
            minmax.max = arr[high]; 
            minmax.min = arr[low]; 
        }  
        return minmax; 
    } 
      
    mid = (low + high) / 2;  
    mml = getMinMax(arr, low, mid); 
    mmr = getMinMax(arr, mid + 1, high);  
      
    // Compare minimums of two parts 
    if (mml.min < mmr.min) 
    {
    	minmax.min = mml.min;
    } 
    else
    {
    	minmax.min = mmr.min; 
   	}     
      
    // Compare maximums of two parts 
    if (mml.max > mmr.max) 
    {
    	minmax.max = mml.max;
   	} 
    else
    {
    	minmax.max = mmr.max;
    }        
    return minmax; 
} 
  

signed main(){

	fast ;
	
	int test ;
	cin >> test ;
	while (test--)
	{
		//input 
		int n ;
		cin >> n ;

		int arr[n];
		for (int i = 0 ; i < n ; i++)
		{
			cin >> arr[i];
		}

		//processing part

		struct Pair minmax = getMinMax(arr, 0, n - 1); 		

		//output part 
		
		cout << minmax.min << " " << minmax.max << endl ;

	}
	return 0 ;
}
