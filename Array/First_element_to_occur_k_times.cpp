// First_element_to_occur_k_times
// https://practice.geeksforgeeks.org/problems/first-element-to-occur-k-times5150/1?page=1&difficulty[]=-2&difficulty[]=-1&category[]=Arrays&curated[]=1&sortBy=submissions


class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        int arr[201]={0};
        for(int i=0;i<n;i++){
            arr[a[i]]++;
            if(arr[a[i]]==k){
                return a[i];
            }
        }
        return -1;
    }
};
