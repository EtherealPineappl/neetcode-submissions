class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> resultMap;
        vector<vector<string>> groupedAnagrams;

        for(const string& w : strs) {
            string sortedWord = w;
            sort(sortedWord.begin(), sortedWord.end());
            
            auto it = resultMap.find(sortedWord);
            resultMap[sortedWord].push_back(w);
        
        }

        for (const auto& [key, group] : resultMap) {
            groupedAnagrams.push_back(group);
        }

        return groupedAnagrams;
    }
};
