class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        std::array<int16_t,26> char_bank{};
        for (char& c : magazine) {
            int8_t ascii_val = static_cast<int>(c);
            int8_t index = ascii_val % 97;
            char_bank[index] += 1;
            }
        bool can_make_ransom_note{true};
        for( char& c:ransomNote){
            int8_t ascii_val = static_cast<int>(c);
            int8_t index = ascii_val % 97;
            char_bank[index] -= 1;
            if(char_bank[index] < 0){
                can_make_ransom_note = false;
                break;
            }
        }
        return can_make_ransom_note;
    }
};