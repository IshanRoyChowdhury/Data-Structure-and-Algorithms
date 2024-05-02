#include <cstring>
class Solution {
public:
    int myAtoi(string str) {
        // Find the first non-whitespace character
        auto it = std::find_if(str.begin(), str.end(),
                               [](char c) { return (c != ' '); });
        // If there are leading whitespaces, erase them
        if (it != str.begin()) {
            str.erase(str.begin(), it);
        }
        bool is_positive{true};
        if (str[0] == '-') {
            is_positive = false;
        }
        int64_t num = 0;
        bool found_non_num{false};
        int32_t count{0};
        constexpr int32_t min32{-2147483648};
        constexpr int32_t max32{2147483647};
        bool is_over_under_flow{false};
        for (char c : str) {
            if (c == '-' || c == '+') {
                if (count == 0) {
                    count++;
                    continue;
                }
            }
            int digit{0};
            switch (c) {
            case '0':
                digit = 0;
                break;
            case '1':
                digit = 1;
                break;
            case '2':
                digit = 2;
                break;
            case '3':
                digit = 3;
                break;
            case '4':
                digit = 4;
                break;
            case '5':
                digit = 5;
                break;
            case '6':
                digit = 6;
                break;
            case '7':
                digit = 7;
                break;
            case '8':
                digit = 8;
                break;
            case '9':
                digit = 9;
                break;
            default:
                found_non_num = true;
                break;
            }
            if (found_non_num) {
                break;
            }
            if (num * 10 < max32) {
                num = num * 10 + digit;
            } else {
                if (is_positive)
                    num = max32;
                else
                    num = min32;
                is_over_under_flow = true;
                break;
            }
            count++;
        }
        if (!is_positive && !is_over_under_flow) {
            num = -1 * num;
        }

        if (num < min32) {
            num = min32;
        } else if (num > max32) {
            num = max32;
        } else {
            // do nothing
        }
        return num;
    }
};