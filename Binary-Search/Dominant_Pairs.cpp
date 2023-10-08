
/* https://practice.geeksforgeeks.org/problems/2a1c11024ceae36363fc405e07f2fa3e2f896ef0/1*/

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        // Code here
        int count=0;
        sort(arr.begin()+n/2,arr.end());
        for(int i=0;i<n/2;i++)
        {
           int largest_j=n/2-1;
           int low=n/2,high=n-1;
           while(low<=high)
           {
               int mid=(low+high)/2;
               if(arr[i]>=5*arr[mid])
               {
                   largest_j=mid;
                   low=mid+1;
               }
               else{
                   high=mid-1;
               }
           }
           count+=(largest_j-n/2+1);
        }
        return count;
    }  
};