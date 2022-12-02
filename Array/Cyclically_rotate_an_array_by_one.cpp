// Cyclically rotate an array by one
// https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1?page=1&difficulty[]=-1&category[]=Arrays&curated[]=7&sortBy=submissions


void rotate(int arr[], int n)
{   int temp=0;
    temp=arr[n-1];
    int arr2[n];
    arr2[0]=temp;
    
    for(int i=0;i<n-1;i++){
        arr2[i+1]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=arr2[i];
    }
}
