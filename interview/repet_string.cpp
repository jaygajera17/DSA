
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    string s="A2BC4D5";
    vector<string>v;
    for(int i=0;i<s.size();i++)
    {
        
        if(isdigit(s[i])) continue;
        string t;
        for(int j=i;j<s.size();j++)
        {
            if(!isdigit(s[j]))
            {
                t=t+s[j];
            }
            else
            {
                int n=s[j]-'0';
                while(n--)
                {
                v.push_back(t);
                }
                i=j;
                break;
            }
        }
        
        
    }   
    for(auto i:v)
    {   
       cout<<i;    
    }
    return 0;
}
