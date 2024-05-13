class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> soln{};
        std::string  f{"Fizz"};
        std::string b{"Buzz"};
        std::string fb{f+b};
        for(auto i{1}; i<=n; i++){
            if(i%3 == 0 && i%5 == 0){
                soln.push_back(fb);
            } else if(i% 3 == 0){
                soln.push_back(f);
            } else if(i% 5 == 0){
                soln.push_back(b);
            } else {
                soln.push_back(std::to_string(i));
            }
        }
        return soln;
    }
};