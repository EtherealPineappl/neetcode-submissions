class Solution {
public:
    //Thanksgiving so not my best work, but its time to eat good food instead of coding

    string encode(vector<string>& strs) {
        string encodedString;
        for (string s : strs) {
            encodedString += to_string(s.size());
            encodedString += "#";
            encodedString += s;
        }

        return encodedString;
    }

    vector<string> decode(string s) {
        vector<string> decodedStrings;
        int i = 0;
        while (i < s.size()) {
            int hashPos = s.find('#', i);
            int len = stoi(s.substr(i, hashPos - i));
            decodedStrings.push_back(s.substr(hashPos + 1, len));
            i = hashPos + 1 + len;
        }
        
        return decodedStrings;
    }
};
