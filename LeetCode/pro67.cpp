// https://leetcode.com/problems/add-binary/

class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int i = a.size()-1;
        int j= b.size()-1;
        int digit_a , digit_b ,carry =0;

        while(i>=0 || j>=0 || carry){
            digit_a = (i>=0)?(a[i]-'0'):0;
            digit_b = (j>=0)?(b[j]-'0'):0;

            int sum = digit_a+digit_b+carry;
            result.push_back((sum%2)+'0');
            carry=sum/2;
            i--;
            j--;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
