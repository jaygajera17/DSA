/* https://practice.geeksforgeeks.org/problems/ceil-the-floor2802/1 */

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    sort(arr,arr+n);
    
    int low=0;
    int high=n-1;
    int c=-1;
    int f=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==x)
        {
            f=arr[mid];
            c=arr[mid];
            break;
        }
        
        else if(arr[mid]>x) 
        {
            c=arr[mid];
            high=mid-1;
        }
        else
        {
            f=arr[mid];
            low=mid+1;
        }
    }
    return {f,c};
}