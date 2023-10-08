/*  https://leetcode.com/problems/plus-one/ */


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
         int l=digits.size()-1;
         vector<int> v;
         digits[l]++;
         while(l>=0)
         {
            int sum=carry;
            sum =sum+digits[l--];
            v.push_back(sum%10);
            carry=sum/10;
             
         }
         if(carry>0)
         {
             v.push_back(carry);
         }
   reverse(v.begin(),v.end());
    return v;
    }
};