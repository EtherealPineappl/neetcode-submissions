class Solution {
public:
    bool isAnagram(const string& s, const string& t) {
        int counts[26] = {};

        if (s.length() != t.length()) {
            return false;
        }

        for (size_t i = 0; i < s.length(); i++) {
            counts[s[i] - 'a']++;
            counts[t[i] - 'a']--;
        }
        
        for (int count : counts){
            if (count != 0) return false;
        }

        return true;
    }
};
