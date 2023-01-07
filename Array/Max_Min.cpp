// Max Min
// https://practice.geeksforgeeks.org/problems/max-min/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	//code here.
    	int min=A[0];
    	int max=A[0];
    	for(int i=0;i<N;i++){
    	    if(min>A[i]){
    	        min=A[i];
    	    }
    	    if(max<A[i]){
    	        max=A[i];
    	    }
    	}
    	int sum=min+max;
    	return sum;
    }

};
