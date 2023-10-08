/*https://practice.geeksforgeeks.org/problems/merge-sort/1*/

 void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int i=l;
         int j=m+1;
         int k=l;
         int temp[r+1];
         while(i<=m && j<=r)
         {
             if(arr[i]<=arr[j])
             {
                 temp[k]=arr[i];
                 i++;
                 k++;
             }
             else
             {
                 temp[k]=arr[j];
                 j++;
                 k++;
             }
         }
         
        for(;i<=m;i++) temp[k++]=arr[i];  //fill remaining element
        for(;j<=r;j++) temp[k++]=arr[j];
        
         
         for(int i=l;i<=r;i++)
         {
             arr[i]=temp[i];
         }
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        
        if(l<r)
        {
            int mid=(l+r)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);
        }
    }