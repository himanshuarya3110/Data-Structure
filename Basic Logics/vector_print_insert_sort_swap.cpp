#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(5);                 //Inserting 5 in array.
    vec.push_back(6);                 //Inserting 6 in array.
    vec.push_back(7);                 //Inserting 7 in array.    
    vec.push_back(8);                 //Inserting 8 in array.    
    
    // cout<<*(vec.begin())<<endl;    //This will print the 1st Element in the array.
    // cout<<*(vec.end()-1);          //This will print the last Element in the array.
    

    vec.insert(vec.begin(),10);       //Inserting 10 at the begining of the array.
    sort(vec.begin(),vec.end());      //This will sort the from starting to end.
    swap(vec[0],vec[3]);              //This will swap the array indices value.

    for(auto h:vec)                   //To PRINT the vector array.
    cout<<h<<endl; 
    
    return 0;
}
