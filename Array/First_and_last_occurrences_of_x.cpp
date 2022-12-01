// First and last occurrences of x
// https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1?page=1&difficulty[]=-1&category[]=Arrays&curated[]=7&sortBy=submissions

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    int l,count=0;
    vector<int> first;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            
            l=i;
            count++;
            
        }
    }
    if(count==0){
    first.push_back(-1);
    first.push_back(-1);
    return first;    
    }
    else{
    int f=l-count+1;
    first.push_back(f);
    first.push_back(l);
    return first;
    }
    
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
