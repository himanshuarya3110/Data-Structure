// Majority Element
// https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        int n = size/2;
        int count = 1;
        sort(a,a+size);
        for(int i=0 ; i<size ; i++){
            if(a[i]==a[i+1]){
                count++;
            }
            else{
                count=1;
            }
            if(count>n){
                return a[i];
            }
        }
        return -1;
        
    }
};
