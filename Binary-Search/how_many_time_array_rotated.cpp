/* https://practice.geeksforgeeks.org/problems/rotation4723/1 */

int findKRotation(int arr[], int n) {
	    // code here
	     int low=0;
        int high=n-1;
        int ans=INT_MAX;
        int index=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            
            if(arr[low]<=arr[mid])
            {
                if(arr[low]<ans)
                {
                   index=low;
                   ans=arr[low];
                }
                low=mid+1;
            }
            else
            {
                
                if(arr[mid]<ans)
                {
                   index=mid;
                   ans=arr[mid];
                }
                high=mid-1;
               
            }
        }
       
        return index;
	}