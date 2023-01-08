// Common_elements
// https://practice.geeksforgeeks.org/problems/common-elements1132/1

class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector <int> v;
            for(int i=0;i<n1;i++)
            {
                bool a = binary_search(C, C+n3, A[i]);
                bool b = binary_search(B, B+n2, A[i]);
                if (a && b) 
                {
                    if (v.empty())
                    { 
                        v.push_back(A[i]);
                    }    
                    else if (A[i]!=v.back()) 
                    {
                        v.push_back(A[i]);
                    }    
                }
            }
            return v;
            
        }

};
