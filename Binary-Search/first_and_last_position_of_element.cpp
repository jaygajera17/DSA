/* https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/ */

vector<int> searchRange(vector<int>& nums, int target) {
      
      int low=0;
      int high=nums.size()-1;
      int first_occurence=-1;
      int last_occurence=-1;
      while(low<=high)
      {
          int mid=low+ (high-low)/2;

          if(nums[mid]==target)
          {
              high=mid-1;
              first_occurence=mid;
          }
          else if(target>nums[mid])
          {
              low=mid+1;
          }
          else
          {
              high=mid-1;
          }
      }

      int low2=0;
      int high2=nums.size()-1;

      while(low2<=high2)
      {
          int mid=low2+ (high2-low2)/2;
          
          if(nums[mid]==target)
          {
              low2=mid+1;
              last_occurence=mid;
          }
          else if(target>nums[mid])
          {
              low2=mid+1;
          }
          else
          {
              high2=mid-1;
          }
      }
      return {first_occurence,last_occurence};

    }