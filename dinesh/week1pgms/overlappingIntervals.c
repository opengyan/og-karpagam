#include <stdio.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main(void) {
	// your code goes here
	int size;
	scanf("%d",&size);
	int i,j,x[size],y[size];
	for(i=0;i<size;i++){
		scanf("%d%d",&x[i],&y[i]);
	}
	qsort(x,size,sizeof(int),cmpfunc);
	qsort(y,size,sizeof(int),cmpfunc);
	int flag=1;
		for(i=0;i<size;i++){
		if(y[i]<x[i+1]&&flag)
			printf("%d %d\n",x[i],y[i]);
		else{
			if(x[i]>=y[i-1]&&flag&&x[i+1]<y[i]){
				printf("%d ",x[i-1]);
				flag=0;
			}
			if(flag==0){
				if(y[i]<x[i+1]){
					printf("%d\n",y[i]);
					flag=1;
				}
			}
		}
	}
	if(flag==0)
		printf("%d\n",y[size-1]);
	return 0;
}
