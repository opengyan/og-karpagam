#include<stdio.h>
int maximum(int a, int b) { 
	return (a > b)? a : b;
}
int cutProfit(int a[], int n)
{
   if (n <= 0)
     return 0;
   int i,max=0;
   for (i = 0; i<n; i++)
         max=maximum(max,a[i]+cutProfit(a,n-i-1));
    return max;
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
   printf("%d", cutProfit(arr,n));
   return 0;
}
