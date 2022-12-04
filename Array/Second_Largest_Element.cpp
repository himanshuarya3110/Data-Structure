// Second Largest Element
// https://practice.geeksforgeeks.org/problems/second-largest3735/1

class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    sort(arr,arr+n);
	    int max=arr[0];
	    for(int i=1; i<n; i++){
	        if(arr[i]>max){
	            max=arr[i];
	        }
	    }
	    for(int i=n-1; i>=0; i--){
	        if(arr[i]<max){
	            return arr[i];
	        }
	    }
	    return -1;
	    
	}
};
