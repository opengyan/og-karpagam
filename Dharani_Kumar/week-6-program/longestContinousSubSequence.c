#include<stdio.h>
int main(){
	int arraySize,temp,maxStartIndex=-1,maxEndIndex,subStartIndex,subEndIndex,flag=1;
	printf("ENTER ARRAY SIZE : ");
	scanf("%i",&arraySize);
	int array[arraySize];
	for(temp=0;temp<arraySize;temp++){
		scanf("%i",&array[temp]);
	}
	for(temp=0;temp<arraySize;temp++){
		if(array[temp]>=0)
			break;
	}
	maxStartIndex=temp;
	subStartIndex=temp;
	for(;temp<arraySize;temp++){
		if(array[temp]<=0&&(subStartIndex!=-1)){
			subEndIndex=temp-1;
			if(flag){
				maxEndIndex=temp-1;
				flag=0;
			}
			else{
				if((subEndIndex-subStartIndex)>=(maxEndIndex-maxStartIndex)){
					maxStartIndex=subStartIndex;
					maxEndIndex=subEndIndex;
				}
			}
			subStartIndex=-1;
		}
		else{
			if(subStartIndex==-1&&array[temp]>=0)
				subStartIndex=temp;
		}
	}
	if(flag){
		maxEndIndex=temp-1;
	}
	else if(subStartIndex!=-1){
		subEndIndex=temp-1;
		if((subEndIndex-subStartIndex)>=(maxEndIndex-maxStartIndex)){
			maxStartIndex=subStartIndex;
			maxEndIndex=subEndIndex;
		}		
	}
	flag=1;
	for(temp=maxStartIndex;temp<=maxEndIndex&&(maxStartIndex!=-1);temp++){
		printf("%i  ",array[temp]);
		flag=0;
	}
	if(flag)
		printf("INVALID");
	return 0;
}
