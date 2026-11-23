class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> potentials = {};

        for (int i = 0; i < nums.size(); i++){
            int n = nums[i];

            if (potentials.contains(n)) {
                return {potentials[n], i};
            }

            potentials[target - n] = i;
        }

        return {0, 0};
    }
};
