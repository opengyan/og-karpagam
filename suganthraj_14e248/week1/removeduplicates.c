PROBLEM 2:

In a given array of unsorted numbers, remove the duplicates in the array without using extra array


SOLUTION:
#include <stdio.h>

int main()
{ 
    int n,i,j;
    scanf("%d",&n);
    int arr[100000];
    for(i=0;i<n;i++)
    {
         scanf("%d",&arr[i]);
    }
     for(i=0;i<n;i++)
    {
         for(j=i+1;j<n;j++)
         
    {
        if(arr[i]==arr[j])
        
             arr[j]=2e9;
        
    }
    }
    for(i=0;i<n;i++)
    
         if(arr[i]!=2e9)
        
                  printf("%d  ",arr[i]);
    
    return 0;
}

