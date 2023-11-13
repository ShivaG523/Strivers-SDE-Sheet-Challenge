class Solution {
public:
    string sortVowels(string s) {
        vector<char>vowels_vec;
        
     for(int i=0;i<s.size();i++){
         char t=tolower(s[i]);
         if(t=='a'||t=='e'||t=='i'||t=='o'||t=='u'){
             vowels_vec.push_back(s[i]);
         }
     }
        sort(vowels_vec.begin(),vowels_vec.end());
        int j=0;
         for(int i=0;i<s.size();i++){
         char t=tolower(s[i]);
         if(t=='a'||t=='e'||t=='i'||t=='o'||t=='u'){
             s[i]=vowels_vec[j];
             j++;
         }
     }
        return s;
    }
};