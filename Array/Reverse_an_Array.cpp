// Reverse an Array
// https://practice.geeksforgeeks.org/problems/reverse-an-array/0?category%5B%5D=Arrays&category%5B%5D=Arrays&page=5&query=category%5B%5DArrayspage5category%5B%5DArrays

#include<bits/stdc++.h>
using namespace std;

int main()
{
	//code
	int t;
	cin>>t;
	while(t--){
	
	    	int n;
        	cin>>n;
    
	    	int arr[n];
	    	for(int i=0; i<n; i++)
    		{
	        	cin>>arr[i];
		}
	
	    //Reversing an array
	    	int s = 0;
        	int e = n - 1;

        	while (s <= e)
        	{
            		int temp;
           		temp=arr[e];
            		arr[e]=arr[s];
            		arr[s]=temp;
        
            		s++;
            		e--;
        	}
	
	    //Printing array
	    	for(int i=0; i<n; i++)
    		{
	        	cout<<arr[i]<<" ";
	    	}
		cout<<endl;
	}
	return 0;
}
