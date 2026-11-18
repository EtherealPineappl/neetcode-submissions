class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> seen;
        seen.reserve(nums.size());

        for (int n : nums) {
            auto [pos, wasNew] = seen.insert(n);
            if (!wasNew) return true;
        }

        return false;
    }
};