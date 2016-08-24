#include <stdio.h>
#include <limits.h>
int main(void) {
	int size;	//size of input array
	scanf("%d",&size); 
	int array[size],i,j;
	for( i=0;i<size;i++ )
		scanf("%d", &array[i] );
	int subarraySize;	//size of subarray
	scanf("%d",&subarraySize);
	for(i=0;i<=size-subarraySize;i++){
		int max=array[i];
		for(j=i+1; j<i+subarraySize;j++){
			if(array[j] > max)
				max = array[j]; 
		}
		printf("%d ",max);
	}
	printf("\b");
	return 0;
}