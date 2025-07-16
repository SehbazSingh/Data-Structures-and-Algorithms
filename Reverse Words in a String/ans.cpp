class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        for (int i =0 ; i< s.size();i++){
            string word = "";
            while (i < s.size() && s[i] != ' '){
                word += s[i];
                i++;
            }
            if (word.size() > 0){
                ans = " " + word + ans;
            }
    
        }
        return ans.substr(1);
        
        
    }
};
