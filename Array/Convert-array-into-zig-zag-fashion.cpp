// convert-array-into-zig-zag-fashion
// https://practice.geeksforgeeks.org/problems/convert-array-into-zig-zag-fashion1638/1?page=1&difficulty[]=-2&difficulty[]=-1&category[]=Arrays&curated[]=1&sortBy=submissions

class Solution {
  public:
    
    void zigZag(int arr[], int n) {
        // code here
        for(int i=0;i<n-1;i++){
            
            if(i%2==0){ //for even index
                if(arr[i]>arr[i+1])
                    swap(arr[i],arr[i+1]);
            }
            else{ //for odd index
                if(arr[i]<arr[i+1])
                    swap(arr[i],arr[i+1]);
            }   
        }
        
    }
};
