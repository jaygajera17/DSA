


void selectionSort(int arr[], int n)
    {
       //code here
      for(int i=0;i<n;i++)
      { 
        int mini=INT_MAX;
        int pos=0;
          
          for(int j=i+1;j<n;j++)
          {
              if(arr[j]<mini)
              {
                  mini=arr[j];
                  pos=j;
              }
          } 
          swap(arr[i],arr[pos]);
      }
    }