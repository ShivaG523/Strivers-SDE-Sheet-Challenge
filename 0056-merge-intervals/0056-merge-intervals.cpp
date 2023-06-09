class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
         sort(intervals.begin(), intervals.end());
          reverse(intervals.begin(), intervals.end());

        int n=intervals.size();
        vector<vector<int>>ans;
        int i;
        for(i=n-1;i>0;i--){
            if(intervals[i][1]>=intervals[i-1][0]){
                
                vector<int>v;
                v.push_back(intervals[i][0]);
                v.push_back(max(intervals[i-1][1],intervals[i][1]));              
            intervals.erase(intervals.begin() + i);
            intervals.erase(intervals.begin() + i-1);
            intervals.push_back(v);
                v.clear();
            }
            else{
                ans.push_back(intervals[i]);
                intervals.pop_back();}
        }
        
        ans.push_back(intervals[i]);
            sort(ans.begin(),ans.end());
             return ans;
   
    }
};