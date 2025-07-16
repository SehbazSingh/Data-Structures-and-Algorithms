class Solution {
public:
    bool isvalid(int freq[], int windowfreq[]) {
        for (int i = 0; i < 26; i++) {
            if (freq[i] != windowfreq[i]) {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        int freq[26] = {};
        for (char c : s1) {
            freq[c - 'a']++;
        }

        int window_size = s1.size();
        int windowfreq[26] = {};

        for (int i = 0; i < window_size; i++) {
            windowfreq[s2[i] - 'a']++;
        }

        if (isvalid(freq, windowfreq)) return true;

        for (int i = window_size; i < s2.size(); i++) {
            windowfreq[s2[i - window_size] - 'a']--;  
            windowfreq[s2[i] - 'a']++;                
            if (isvalid(freq, windowfreq)) return true;
        }

        return false;
    }
};
