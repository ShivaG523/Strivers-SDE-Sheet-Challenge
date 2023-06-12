class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
     vector<string>ans;
        int c=0;
        int f=INT_MAX;
        int i=1;
        int t;
        for(i=1;i<nums.size();i++){
            t=nums[i]-1;
            if(t==nums[i-1]){
              c++;
                f=min(f,nums[i-1]);}
            else if(c>0){
               string s="";
                   
                   
                   s=s+to_string(f);
                   s=s+"->";
                   s=s+to_string(nums[i-1]);
                 
                      ans.push_back(s);
                  c=0;
                  
                f=INT_MAX;
            }
            else{
               ans.push_back(to_string(nums[i-1]));
            } }
        
        if(c>0){
               string s="";
                  
                   s=s+to_string(f);
                   s=s+"->";
                   s=s+to_string(nums[i-1]);
                
                      ans.push_back(s);
                  c=0;
                  
                f=INT_MAX;
            }
            else if(nums.size()>0){
               ans.push_back(to_string(nums[i-1]));
            }
        return ans;
    }
};