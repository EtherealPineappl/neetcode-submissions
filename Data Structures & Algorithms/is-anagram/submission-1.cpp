class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        for (char letter : s) {
            int pos = t.find(letter);

            if (pos != std::string::npos){
                t.erase(pos, 1);
            } else {
                return false;
            }
        }

        return true;
    }
};
