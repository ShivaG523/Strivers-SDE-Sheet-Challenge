//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        // code here
        unordered_map<int,int>ump;
        for(int i=0;i<N;i++){
            
            if(bills[i]==10)
            {
                if(ump[5]>0)
                ump[5]--;
                else
                return false;
            }
            else if(bills[i]==15){
                if(ump[10]>0)
                ump[10]--;
                else if(ump[5]>1)
                ump[5]=ump[5]-2;
                else
                return false;
            }
            else if(bills[i]==20){
                if(ump[10]>0&&ump[5]>0){
                ump[10]--;
                ump[5]--;}
                else if(ump[5]>2)
                ump[5]=ump[5]-3;
                else
                return false;
            }
            ump[bills[i]]++;
        }
        
           return true;
 
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends