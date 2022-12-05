// Arranging the array
// https://practice.geeksforgeeks.org/problems/arranging-the-array1131/1?page=1&difficulty[]=-1&category[]=Arrays&curated[]=7&sortBy=submissions

void Rearrange(int arr[], int n)
{
    // Your code goes here
    
    vector<int> neg;
    vector<int> pos;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            neg.push_back(arr[i]);
            count++;
        }
        else{
            pos.push_back(arr[i]);
        }
    }
    for(int j=0;j<pos.size();j++){
        neg.push_back(pos[j]);
    }
    for(int i=0;i<n;i++){
        arr[i]=neg[i];
    }
}
