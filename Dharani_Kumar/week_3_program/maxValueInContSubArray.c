#include<stdio.h>
int main(){
	int iArrSize,iSubArrSize,iTemp1,iTemp2,iRear,iFront;
	scanf("%i",&iArrSize);
	int iArr[iArrSize];
	scanf("%i",&iArr[0]);
	int iMax=iArr[0];
	for(iTemp1=1;iTemp1<iArrSize;iTemp1++){
		scanf("%i",&iArr[iTemp1]);
	}
	scanf("%i",&iSubArrSize);	
	for(iTemp1=1;iTemp1<iSubArrSize;iTemp1++){
		iMax=iMax<iArr[iTemp1]?iArr[iTemp1]:iMax;
	}
	printf("%i ",iMax);
	iFront=0;
	iRear=iSubArrSize-1;
	while(iFront<(iArrSize-iSubArrSize)){
		iRear++;
		if(iMax<iArr[iRear]){
			iMax=iArr[iRear];
			printf("%i ",iMax);
			iFront++;
		}
		else {
			iFront++;			
				iMax=iArr[iFront];
				for(iTemp1=iFront+1;iTemp1<=iRear;iTemp1++){
					iMax=iMax<iArr[iTemp1]?iArr[iTemp1]:iMax;
				}				
			printf("%i ",iMax);
		}
	}
}
