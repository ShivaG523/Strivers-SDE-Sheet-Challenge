class Solution {
public:
    int countHomogenous(string s) {
        int c=1;
        int ans=0;
        int mod=1000000007;
      for(int i=0;i<s.size()-1;i++){
         
          if(s[i]!=s[i+1]){
              ans=ans+1;
              c=1;
          }
          else{
              c++;
              ans=ans+c;
          } 
          ans=ans%mod;
      }
          return ans+1;
       
    }
};