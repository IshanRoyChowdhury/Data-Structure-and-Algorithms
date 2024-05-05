class Solution {
public:
    int maxArea(vector<int>& height) {
        int left{0};
        int right{static_cast<int>(height.size()) - 1};
        int area{0};
        while(left < right){
            int curr_area{(std::min(height[left], height[right])) * (right - left)};
            if (curr_area > area){
                area = curr_area;
            }
            if(height[left] < height[right]){
                left++;
            } else{
                right--;
            }
        }
        return area;
    }
};