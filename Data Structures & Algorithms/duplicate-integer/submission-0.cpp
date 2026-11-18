class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector<int> foundNums;

        for (int i = 0; i < nums.size(); i++) {
            int curNum = nums[i];
            
            bool exists = find(foundNums.begin(), foundNums.end(), curNum) != foundNums.end();
            if (!exists) {
                foundNums.push_back(curNum);
            } else {
                return true;
            }
        }

        return false;
    }
};