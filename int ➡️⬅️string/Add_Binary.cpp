/* https://leetcode.com/problems/add-binary/ */

class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        while(a.length()>b.length())
        {
            b='0'+b;
        }
         while(a.length()<b.length())
        {
            a='0'+a;
        }
      int carry=0;
      
        for(int i=a.length()-1;i>=0;i--)
        {
            int sum=(a[i]-'0')+(b[i]-'0');
            if(sum+carry==0)
            {
                result+='0';
                carry=0;
            }
             else if(sum+carry==1)
            {
                result+='1';
                carry=0;
            }
             else if(sum+carry==2)
            {
                result+='0';
                carry=1;
            }
             else if(sum+carry==3)
            {
                result+='1';
                carry=1;

            }
           
        }
        if(carry==1)
        {
            result=result+'1';
        }
        reverse(result.begin(),result.end());
        return result ;

}
    };