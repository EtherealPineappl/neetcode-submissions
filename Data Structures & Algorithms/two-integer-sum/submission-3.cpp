class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> potentials;
        potentials.reserve(nums.size());

        for (size_t i = 0; i < nums.size(); i++){
            int n = nums[i];

            auto it = potentials.find(n);
            if (it != potentials.end()) {
                return {it->second, static_cast<int>(i)};
            }

            potentials[target - n] = i;
        }

        return {0, 0};
    }
};
