class Solution {
public:
    string intToRoman(int num) {
        std::string roman_num{""};
        int first_dig{0};
        bool num_starts_four_or_nine{false};
        if ((num > 100) && (num < 1000)) {
            first_dig = num / 100;

        } else if ((num < 100) && (num > 10)) {
            first_dig = num / 10;
        } else if ((num < 10) && (num == 4 || num == 9)) {
            first_dig = num;
        }
        if ((first_dig == 4) || (first_dig == 9))
            num_starts_four_or_nine = true;
        // special handling
        if (num_starts_four_or_nine) {
            if (num >= 900) {
                num -= 900;
                roman_num += "CM";
            } else if (num >= 400) {
                num -= 400;
                roman_num += "CD";
            } else if (num >= 90) {
                num -= 90;
                roman_num += "XC";
            } else if (num >= 40) {
                num -= 40;
                roman_num += "XL";
            } else if (num == 4) {
                num -= 4;
                roman_num += "IV";
            } else if (num == 9) {
                num -= 9;
                roman_num += "IX";
            }

        } else {
            if (num >= 1000) {
                num -= 1000;
                roman_num += 'M';
            } else if ((num >= 500) && (num < 1000)) {
                num -= 500;
                roman_num += 'D';
            } else if ((num >= 100) && (num < 500)) {
                num -= 100;
                roman_num += 'C';
            } else if ((num >= 50) && (num < 100)) {
                num -= 50;
                roman_num += 'L';
            } else if ((num >= 10) && (num < 50)) {
                num -= 10;
                roman_num += 'X';
            } else if ((num >= 5) && (num < 10)) {
                num -= 5;
                roman_num += 'V';
            } else {
                num--;
                roman_num += 'I';
            }
        }
        //std::cout << roman_num;
        if (num > 0) {
            roman_num += intToRoman(num);
        }
        return roman_num;
    }
};