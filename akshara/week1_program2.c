#include <stdio.h>
int main() {
	int num;
	scanf("%d",&num);
	int a[num],temp,flag=0,j=0,k,i;
	scanf("%d",&a[j]);
	for(i=1;i<num;i++){
		scanf("%d",&temp);
		flag=0;
		for(k=0;k<j;k++){
			if(a[k]==temp){
				flag=1;
				break;
			}
		}
		if(flag==0){
			a[j++]=temp;
		}
	}
	for(i=0;i<j;i++){
		printf("%d ",a[i]);
	}	
	return 0;
}
