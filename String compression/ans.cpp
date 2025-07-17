class Solution {
public:
    int compress(vector<char>& chars) {
        int vcount = 0, ecount = 1;
        char element = chars[0];
        for (int i = 1 ; i < chars.size(); i++) {
            if (chars[i] == element) {
                ecount++;
            } else {
                chars[vcount++] = element;
                if (ecount > 1) {
                    string countStr = to_string(ecount);
                    for (char ch : countStr) {
                        chars[vcount++] = ch;
                    }
                }
                element = chars[i];
                ecount = 1;
            }
        }


        chars[vcount++] = element;
        if (ecount > 1) {
            string countStr = to_string(ecount);
            for (char ch : countStr) {
                chars[vcount++] = ch;
            }
        }
        return vcount;

        
    }
};
