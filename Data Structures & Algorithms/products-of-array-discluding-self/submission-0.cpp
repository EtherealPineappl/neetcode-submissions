class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefixes;
        int curPrefix = 1;
        vector<int> suffixes;
        int curSuffix = 1;
        vector<int> result;

        for (size_t i = 0; i < nums.size(); i++) {
            prefixes.push_back(curPrefix);
            curPrefix *= nums[i];
            
        }

        
        for (int j = nums.size() - 1; j >= 0; j--) {
            suffixes.push_back(curSuffix);
            curSuffix *= nums[j];
        }
        std::reverse(suffixes.begin(), suffixes.end());
        

        for (size_t k = 0; k < nums.size(); k++) {
            result.push_back(suffixes[k]*prefixes[k]);
        }


        return result;
    }
};
