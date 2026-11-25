class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqMap;
        for (int n : nums) {
            freqMap[n]++;
        }

        vector<vector<int>> buckets(nums.size() + 1);
        for (const auto& [number, freq] : freqMap) {
            buckets[freq].push_back(number);
        }

        vector<int> sortedResults;
        for (int i = buckets.size() - 1; i > 0; i--) {
            for (int num : buckets[i]) {
                sortedResults.push_back(num);
            }
        }

        vector<int> resultByK;
        for (int j = 0; j < k; j++) {
            resultByK.push_back(sortedResults[j]);
        }

        return resultByK;
    }
};
