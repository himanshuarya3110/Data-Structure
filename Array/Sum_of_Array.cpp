//Sum of Array
//https://practice.geeksforgeeks.org/problems/sum-of-array2326/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions

class Solution{
public:
	// function to return sum of elements
	// in an array of size n
	int sum(int arr[], int n) {
	    // code here
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	    }
	    return sum;
	}
};
