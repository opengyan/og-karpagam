#include<stdio.h>
int max(int a, int b) { return (a > b)? a : b;}
int func(int b[], int n)
{
   int a[n+1];
   a[0]=0;
   int i,j;
   for (i=1;i<=n;i++)
   {
       int min=0;
       for (j=0;j<i;j++)
         min=max(min,b[j]+a[i-j-1]);
       a[i]=min;
   }
 	return a[n];
	
}
int main()
{
	int n,i;
	scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Value=%d\n",func(arr,n));
    return 0;
}
