#include<stdio.h>
int main()
{
	int n;
	scanf("%i",&n);
	int a[n][n],b[n][n],c[n][n],i,j,k,l,m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++){
			scanf("%i",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++){
			scanf("%i",&b[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(l=0;l<n;l++){
			k=0;
				for(j=0;j<n;j++){
					k+=(a[i][j]*b[j][l]);
				}	
				c[i][l]=k;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++){
			printf("%i ",c[i][j]);
		}
		printf("\n");
	}
}
