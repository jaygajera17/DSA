 
 
 // ITERATIVE
 int search(vector<int>& nums, int target) {
        
        int n=nums.size();
        int low=0;
        int high=n-1;
     
        while(low<=high)
        {
               int mid=(low+high)/2; // low+(high-low)/2 to avoid overflow
               if(nums[mid]==target) return mid;
               else if(target>=nums[mid]) low=mid+1; 
               else high=mid-1;
        }
        return -1;
    }
    

    // RECURSIVE
    int func(int low,int high,vector<int>&nums,int target)
    {
        if(low>high) return -1;
        int mid=(low+high)/2;
       if(nums[mid]==target) return mid;
       else if(target > nums[mid])  return func(low=mid+1,high,nums,target);
       else return func(low,high=mid-1,nums,target);
       return -1;
    }