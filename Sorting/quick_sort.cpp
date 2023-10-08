

 void quickSort(int arr[], int low, int high)
    {
        if(low<high)
        {
           
            int j=partition(arr,low,high);
            quickSort(arr,low,j);
            quickSort(arr,j+1,high);
            
        }
    }
    public:
    int partition (int arr[], int low, int high)
    {
       int pivot=arr[low];
       int i=low;
       int j=high;
       
       while(i<j)
       {
            while(arr[i]<=pivot && i<=high)
            {
                i++;
            }
            while(arr[i]>pivot && j>=0)
            {
                j--;
            }
            if(i<j)
            {
               int temp=arr[i];
               arr[i]=arrj];
               arr[j]=temp;
            }
       }
       
       int temp=arr[low];
       arr[low]=arr[j];
       arr[j]=temp;
       
       return j;
       
       
    }