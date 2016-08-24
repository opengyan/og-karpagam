#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;) {
         if(arr[j]==arr[i]) {
             for(k=j;k<n;k++) {
                   arr[k]=arr[k + 1];
                            }
                    n--;     /*Decreasing the array size if the value is repeated*/
          } else
            j++;
      } 
   }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}