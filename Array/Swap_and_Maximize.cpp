// Swap and Maximize
// https://practice.geeksforgeeks.org/problems/swap-and-maximize5859/1?page=1&difficulty[]=-1&category[]=Arrays&curated[]=7&sortBy=submissions


long long int maxSum(int arr[], int n)
{
    sort(arr,arr+n);
    vector<int> ans;
    
    for(int i=0, j=n-1; i<=j; i++, j--){
        ans.push_back(arr[i]);
        ans.push_back(arr[j]);
    }
    
    long long int sum = 0;
    
    for(int i=0; i<ans.size()-1; i++){
        sum+=abs(ans[i]-ans[i+1]);
    }
    
    sum+=abs(ans[0]-ans[n-1]);
    
    return sum;
}
