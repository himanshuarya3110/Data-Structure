// Count of smaller elements
// https://practice.geeksforgeeks.org/problems/count-of-smaller-elements5947/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions

int countOfElements(int arr[], int n, int x) 
{
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i] <= x){
            count++;
        }
    }
    return count;
}
