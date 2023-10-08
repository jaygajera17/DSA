#include <iostream>

using namespace std;

int main()
{
    int n=7;
    
/*

      1
     212
    32123
   4321234
    32123
     212
      1
      
*/
    for(int i=1;i<=n;i++)
    {
       if(i<=n/2)
       {
        for(int s=0;s<n-i;s++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j<<"";
        }
        for(int j=2;j<=i;j++)
        {
            cout<<j<<"";
        }
        
       }
       else
       {
           for(int s=0;s<=i-n/2+1;s++)
        {
            cout<<" ";
        }
        for(int j=n-i+1;j>=1;j--)
        {
            cout<<j<<"";
        }
        for(int j=2;j<=n-i+1;j++)
        {
            cout<<j<<"";
        }
       }
       
       cout<<endl;
    }
    
    cout<<endl<<endl;
   
   
   
   
   
   
   
   
    
    
/*

      1
     212
    32123
   4321234
  543212345
 65432123456
7654321234567

*/
    for(int i=1;i<=n;i++)
    {
        for(int s=0;s<n-i;s++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j<<"";
        }
        for(int j=2;j<=i;j++)
        {
            cout<<j<<"";
        }
        cout<<endl;
    }
    


 
    
/*
       * 
      * * 
     * * * 
   * * * * 
    * * * 
     * * 
      * 

*/
     for(int i=1;i<=n;i++)
    {
        if(i<=n/2)
        {
            for(int j=0;j<=n-i;j++) //space=col-n
            {
                cout<<" ";
            }
            
            for(int j=1;j<=i;j++)
            {
                cout<<"* ";
            }
        }
        else
        {
            for(int j=0;j<i-1;j++)  //space= col-n
            {
                cout<<" ";
            }
            for(int j=1;j<=n-i+1;j++)
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    
    
    
    
    
    
    
    
    /* 
    
* 
* * 
* * * 
* * * * 
* * * 
* * 
* 

*/
    
    
    for(int i=1;i<=n;i++)
    {
        if(i<=n/2)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<"* ";
            }
        }
        else
        {
            for(int j=1;j<=n-i+1;j++)
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }                        //optimize:- j<=i or j<=n-i+1 do j<=totalcolumn ,

    return 0;
}
