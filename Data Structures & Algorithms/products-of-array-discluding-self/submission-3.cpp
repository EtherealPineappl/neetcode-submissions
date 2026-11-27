class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int curPrefix = 1;
        int curSuffix = 1;
        vector<int> result(nums.size());

        for (size_t i = 0; i < nums.size(); i++) {
            result[i] = curPrefix;
            curPrefix *= nums[i];
            
        }
        
        
        for (int j = static_cast<int>(nums.size()) - 1; j >= 0; j--) {
            result[j] *= curSuffix;
            curSuffix *= nums[j];
        }
        

        return result;
    }
};
