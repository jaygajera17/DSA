

/* Bruteforce */

int longestOnes(vector<int>& nums, int k) {
 int maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            int count0=0;
            int count=0;
           
           for(int j=i;j<nums.size();j++)
           {
               if(nums[j]==1)
               {
                 count++;
                 maxi=max(count,maxi);
               }
               else{

                   if(count0<k)
                   {
                   count0++;
                   count++;
                   maxi=max(count,maxi);
                   }
                   else
                   {
                       count=0;
                       break;
                   }

               }
           }
           
        }return maxi;
    }