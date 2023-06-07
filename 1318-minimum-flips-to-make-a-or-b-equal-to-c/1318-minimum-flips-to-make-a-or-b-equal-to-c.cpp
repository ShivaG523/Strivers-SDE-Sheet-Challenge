class Solution {
    
public:
    int l;
    vector<int> decToBinary(int n)
{
    vector<int>binaryNum(32,0);
    l=0;

    while (n > 0) {
        binaryNum[l]=(n % 2);
        n = n / 2;
        l++;
    }
 return binaryNum;
}
    int minFlips(int a, int b, int c) {
        vector<int>a1=decToBinary(a);
        vector<int>b1=decToBinary(b);
        vector<int>c1=decToBinary(c);
        int ans=0;
        for(int i=0;i<32;i++){
            if((a1[i]|b1[i])!=c1[i]){
                if(c1[i]==1)
                    ans++;
                else{
                    if(a1[i]==1&&b1[i]==1)
                        ans=ans+2;
                    else
                        ans++;
                }
                
            }
        }
        return ans;
    }
};