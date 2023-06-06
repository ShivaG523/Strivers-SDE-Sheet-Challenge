class Solution {
public:
    vector<int> GenerateRow(int Row){
       vector<int>v;
        v.push_back(1);
        int ans=1;
        for(int i=1;i<Row;i++){
           ans=ans*(Row-i)/i;
            v.push_back(ans);
        }
        return v;
    }
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=0;i<numRows;i++){
           ans.push_back(GenerateRow(i+1));
            
        }
        return ans;
    }
};