#include<stdio.h>
int main()
{
	int i,k=0,x[100],y[100],c[200],j,n,n1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		scanf("%d",&y[i]);
	}
	for(i=0;i<n;i++)
	{
		c[k]=x[i];
		k++;
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n;j++)
		{
			if(y[i]==x[j])
			break;
		}
		if(j==n)
		{
			c[k]=y[i];
			k++;
		}
	}
	printf("The union of two arrrays is: ");
	for(i=0;i<k;i++)
		printf("%d ",c[i]);
	return 0;
	}
