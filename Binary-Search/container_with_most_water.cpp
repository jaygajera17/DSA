/* https://leetcode.com/problems/container-with-most-water/description/  */

class Solution {
public:
    int maxArea(vector<int>& height) {
       
       int i=0;
       int j=height.size()-1;
       long long int maxi=INT_MIN;
       while(i<j)
       {
           long long int level=min(height[i],height[j])*(j-i);
           if(level>maxi) maxi=level;
           if(height[i]<=height[j]) i++;
           else j--;
       }
       return maxi;
    }
};