class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> result{};
        std::vector<int>::iterator it = nums.begin();
        while(it != nums.end()){  
            bool is_target_found{false};
            for(auto j = (it + 1); j != nums.end(); ++j){
                int sum{*it + *j};
                if(sum == target){
                    int idx1 = std::distance(nums.begin(), it);
                    int idx2 = std::distance(nums.begin(), j);
                    result.push_back(idx1);
                    result.push_back(idx2);
                    is_target_found = true;
                    break;
                }
                }
                if(is_target_found){break;}
            ++it;
        }
        return result;
    }
};