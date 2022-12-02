// Check if two arrays are equal or not
// https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1?page=1&difficulty[]=-1&curated[]=1&sortBy=submissions

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> a, vector<ll> b, int n) {
        //code here
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
        return true;
    }
};
