class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(),digits.end());
        int carry = 1;
        for(int i=0;i<digits.size();i++){
            int temp = digits[i] + (carry);
            digits[i] = temp%10;
            carry = temp/10;
        }
        if(carry!=0){
            digits.push_back(carry);
        }
        reverse(digits.begin(),digits.end());
        return digits;
    }
};