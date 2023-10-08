/*  https://leetcode.com/problems/add-strings/description/  */


class Solution {
public:
    string addStrings(string num1, string num2) {
      
      int l1=num1.length()-1;
      int l2=num2.length()-1;
      int carry=0;
      vector<int>v;
      while(l1>=0 || l2>=0)
      {
        int sum=carry;
        if(l1>=0)
        {
            sum=sum+num1[l1--]-'0';
        }
        if(l2>=0)
        {
            sum=sum+num2[l2--]-'0';
        }
        v.push_back(sum%10);
        carry=sum/10;

      }
      if(carry>0)
      {
          v.push_back(carry);
      }
      reverse(v.begin(),v.end());
      string s;
      for(int i=0;i<v.size();i++){
         
         s+= to_string(v[i]);
      }
      return s;
    }
};