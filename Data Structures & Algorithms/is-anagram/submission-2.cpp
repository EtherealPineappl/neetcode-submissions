class Solution {
public:
    bool isAnagram(string s, string t) {
        int counts[26] = {};

        if (s.length() != t.length()) {
            return false;
        }

        for (char c : s) {
            counts[c - 'a']++;
        }

         for (char c : t) {
            counts[c - 'a']--;
        }
        
        for (int count : counts){
            if (count != 0) return false;
        }

        return true;
    }
};
