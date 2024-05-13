class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int k{0};
        std::unordered_set<int> hash;

        for (int el : nums) {
            hash.insert(el);
            if (hash.count(-el) > 0) {
                if (std::abs(el) > k) {
                    k = std::abs(el);
                }
            }
        }
        int result = k > 0 ? k : -1;
        return result;
    }
};