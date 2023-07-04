class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int,int>ump;
        for(auto i:nums){
           ump[i]++;
        }
        int t;
        for(auto i:ump){
            if(i.second==1){
                t=i.first;
                break;}
        }
        return t;
        }
};