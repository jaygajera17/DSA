/* https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1? */


int count(int arr[], int n, int x) {
	  
	   int low=0;
	   int high=n-1;
	   int first_occurence=-1;
	   while(low<=high)
	   {
	       int mid=low+(high-low)/2;
	       
	       if(arr[mid]==x)
	       {
	           high=mid-1;
	           first_occurence=mid;
	       }
	       else if(x>arr[mid]){
	           low=mid+1;
	       }
	       else
	       {
	           high=mid-1;
	       }
	   }
	   
	   int last_occurence=-1;
	   int low2=0;
	   int high2=n-1;
	   
	   while(low2<=high2)
	   {
	       int mid= low2+(high2-low2)/2;
	       if(arr[mid]==x)
	       {
	           low2=mid+1;
	           last_occurence=mid;
	       }
	       else if(x>arr[mid])
	       {
	           low2=mid+1;
	       }
	       else
	       {
	           high2=mid-1;
	       }
	   }
	   if(last_occurence!=-1 || first_occurence!=-1)
	   {
	       return last_occurence-first_occurence+1;
	   }
	   else
	   {
	       return 0;
	   }
	}