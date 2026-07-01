class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
    vector<int> digits;
   
    for(int i=0; i< nums.size();i++){
         int x=nums[i];
         vector<int> temp;
    while (x > 0) {
        temp.push_back(x % 10); // extract last digit
       x/= 10;   
    }
    reverse(temp.begin(), temp.end());
            digits.insert(digits.end(), temp.begin(), temp.end());
    }
    
    return digits;
    }
};