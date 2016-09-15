#include<stdio.h>
void main() {
	int f=-1,l=-1,i,n,k=0,max=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	for(i=0;i<n;i++)
	{
		if(arr[i]<0) {
			if(k>max) {
			l=i-1;
			max=k;
			}
			k=0;
		}
		else {
			if(k==0)
			    {	f=i;  }
			k++;
		}
	 }

			if(k>max) {
			l=i-1;
			max=k;
			}
	printf("%d",max);
}
