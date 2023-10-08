

/* https://leetcode.com/contest/biweekly-contest-99/problems/split-with-minimum-sum/ */

class Solution {
public:
    int splitNum(int num) {
        string s=to_string(num);
        sort(s.begin(),s.end());
        string s1,s2;
        for(int i=0;i<s.length();i++)
        {
            if(i%2==0)
            {
                s1.push_back(s[i]);
            }
            else
            {
                s2.push_back(s[i]);
            }
        }
        int n1=stoi(s1);
        int n2=stoi(s2);
        return n1+n2;
    }
};