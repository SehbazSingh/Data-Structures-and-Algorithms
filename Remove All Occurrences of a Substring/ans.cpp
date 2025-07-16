class Solution {
public:
    string removeOccurrences(string s, string part) {

        while (true) {
            int i = s.find(part);
            if (i == string::npos) {
                return s;
            } else {
                s.erase(i, part.size());
            }
            
        }
   
    }
};
