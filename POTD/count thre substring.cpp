//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countSubstring(string S)
    {
        // code here
          int m = S.size(), ans = 0;
        
        for(int i=0;i<m;i++){
            int lower = 0, upper = 0;
            for(int j = i;j<m;j++){
                if(islower(S[j]))lower++;
                else upper++;
                if(lower == upper)ans++;
            }
        }
        
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends