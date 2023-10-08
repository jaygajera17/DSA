

/*https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/ */

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        vector<int>v(2,-1);
       //for 1st occurence
       while(i<=j)
       {
           int mid=(i+j)/2;
           if(nums[mid]>target)
             j=mid-1;
           else if(nums[mid]<target)
             i=mid+1; 
           else {
               if(mid==0 || nums[mid]!=nums[mid-1])
               {
                   v[0]=mid;
                   break;
               }
               else {
                   j=mid-1;
               }
           }
       }
       i=0;
       j=nums.size()-1;

       //for last occurence
        while(i<=j)
       {
           int mid=i+(j-i)/2;
           if(nums[mid]>target)
             j=mid-1;
           else if(nums[mid]<target)
             i=mid+1; 
           else {
               if(mid==nums.size()-1 || nums[mid]!=nums[mid+1])
               {
                   v[1]=mid;
                   break;
               }
               else {
                   i=mid+1;
               }
           }
       }
        return v;
    }
};