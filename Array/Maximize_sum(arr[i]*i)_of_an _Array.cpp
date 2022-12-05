// Maximize sum(arr[i]*i) of an Array
// https://practice.geeksforgeeks.org/problems/maximize-arrii-of-an-array0026/1?page=1&difficulty[]=-1&category[]=Arrays&curated[]=7&sortBy=submissions


class Solution{
    public:
    int Maximize(int a[],int n)
    {
        // Complete the function
        sort(a,a+n);
        
        long long int sum=0;
        for(long long int i=0;i<n;i++){
            sum = sum + (long long)((a[i])*i);
        }
        return sum  % 1000000007;
    }
};
