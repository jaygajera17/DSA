/* https://leetcode.com/problems/add-to-array-form-of-integer/ */

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry=0;
        vector<int>v;
        string s=to_string(k);
        int l1=num.size()-1;
        int l2=s.length()-1;
        //int sum=0;
         
         while(l1>=0 || l2>=0)
         {
             int sum=carry;
             if(l1>=0){
                 sum=sum+num[l1--];
             }
             if(l2>=0){
                 sum=sum+s[l2--]-'0';
             }
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