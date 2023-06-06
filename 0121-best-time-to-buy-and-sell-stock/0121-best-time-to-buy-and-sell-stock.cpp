class Solution {
public:
    int maxProfit(vector<int>& arr) {
       int mn=INT_MAX;
        int ans=0;
        for(int i=0;i<arr.size();i++){
            if(mn>arr[i])
                mn=arr[i];
            else
                ans=max(ans,arr[i]-mn);
        }
            return ans;
    }
};