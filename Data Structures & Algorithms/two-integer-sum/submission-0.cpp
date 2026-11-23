class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> potentials;

        for (int i = 0; i < nums.size(); i++){
            int n = nums[i];

            auto potIt = find(potentials.begin(), potentials.end(), n);
            if (potIt != potentials.end()) {
                int index = potIt - potentials.begin();
                return {index, i};
            }

            potentials.push_back(target - n);
        }

        return {0, 0};
    }
};
