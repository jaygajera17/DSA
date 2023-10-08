/* https://leetcode.com/problems/reverse-integer/description/ */


 int reverse(int x) {
        
        string s=to_string(x);

        if(x<0) {s.push_back('-');}

        std::reverse(s.begin(),s.end());

         long long int n=0;
         for(int i=0;i<s.length();i++)  //int n=stoll(s); 
         {
             if(s[i]>='0' && s[i]<='9')
             n=(n*10)+(s[i]-'0');
         }

          if(s[0]=='-')
         {
            n=n-(2*n);
         }
         
         if(n>INT_MIN && n<INT_MAX) return n;
         else return 0;
    }


    /* 2nd approch */

    class Solution {
public:
    int reverse(int x) {
        
       vector<int>v;
      bool f=false;
      if(x==0) return 0;
       while(x!=0)
       {
           int mod=x%10;
           if(mod<0)
           {
               f=true;
           }
           v.push_back(abs(mod));
           x=x/10;
       }
       for(auto i:v)
       {
           cout<<i<<" ";
       }
       
       string s;
       for(auto i:v)
       {
           s=s+to_string(i);
       }
       
 long long int ans=stoll(s);
 if(abs(ans)>INT_MAX ) return 0;
  if(f==true) return -ans;
  else  return ans;
    }
};