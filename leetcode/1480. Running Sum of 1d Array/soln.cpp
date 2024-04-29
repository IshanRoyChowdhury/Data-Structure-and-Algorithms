class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum{0U};
        vector<int> run_sum;
        for (auto i:nums){
            sum += i;
            run_sum.push_back(sum);
        }
        return run_sum;
        
    }
};