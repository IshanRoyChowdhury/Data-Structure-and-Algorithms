class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::string sub{""};
        int sub_len = sub.length();
        for(int idx{0}; idx < s.length(); idx++){
            string new_sub_str{""};
            for( int j{idx}; j < s.length(); j++){
                char curr{s[j]};
                if(!isCharPresent(new_sub_str, curr)){
                    new_sub_str = new_sub_str + curr;
                } else {
                    break;
                }   
            }
            if(sub_len < new_sub_str.length()){
            // found a new longer substring 
            sub = new_sub_str;
            sub_len = sub.length();
            }
        }
        return sub_len;
    }
    bool isCharPresent(string s, char c){
        bool is_present{false};
        if(s.length() > 0){
        for(char chr:s){
            if(chr == c){
                is_present = true;
                break;
            }
        }
        }
        return is_present;

    }
};