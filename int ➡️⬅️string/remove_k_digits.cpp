/* https://leetcode.com/problems/remove-k-digits/ */



class Solution {
public:
    string removeKdigits(string num, int k) {
        
        int n=num.size();
        if(n<=k) return "0";
        stack<char>s;

       s.push(num[0]);
        for(int i=1;i<n;i++)
        {
           
            while(k>0&&!s.empty()  && s.top()>num[i])
            {
                s.pop();
                k--;
            }
             if(num[i]!= '0' || !s.empty())
            {
                s.push(num[i]);
            }
        }
        while(!s.empty() && k--) s.pop();
        if(s.empty()) return "0"; //for 1001 k=2 , 11 remove 00 not pushed previous in stack so stack is empty
        string ans="";
        while(!s.empty())
        {
          ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        if(ans.length()==0) return "0";
        return ans;

    }
};