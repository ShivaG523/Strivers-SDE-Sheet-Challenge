//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
      int mod=1000000007;
      if(n==1||n==2)
      return 1;
      
     int arr[n];
      arr[0]=1;
      arr[1]=1;
      for(int i=2;i<n;i++){
          
         arr[i]=(arr[i-1]+arr[i-2])%mod;
         
      }
      return arr[n-1];
      
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends