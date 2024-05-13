class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = static_cast<int>(nums.size());
        int missing_num{n+1};
        unordered_map<int, int> num_seen;
        for(int i:nums){
            num_seen[i]++;
        }
        for(auto i=0; i<=n; i++){
            int count = num_seen[i];
            // std::cout << "(" << i <<"," << count << "), ";
            if(count == 0){
                missing_num = i;
                break;
            }
        }
        return missing_num;
    }
};