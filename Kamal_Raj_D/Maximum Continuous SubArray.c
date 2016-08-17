#include<stdio.h>
int main(){
	int iArrayaySize, iSubArraySize, iTemp1, iTemp2, iRear, iFront;
	printf("Enter the array size: ");
	scanf("%i", &iArrayaySize);
	int iArray[iArrayaySize];
	printf("Enter the array elements:\n");
	scanf("%i", &iArray[0]);
	int iMax = iArray[0];
	for(iTemp1 = 1; iTemp1 < iArrayaySize; iTemp1++){
		scanf("%i", &iArray[iTemp1]);
	}
	printf("Enter the sub-array size: ");
	scanf("%i", &iSubArraySize);
    printf("The maximum elements are:\n");
	for(iTemp1 = 1; iTemp1 < iSubArraySize; iTemp1++) {
		iMax = (iMax < iArray[iTemp1])? iArray[iTemp1]: iMax;
	}
	printf("\n%i ", iMax);
	iFront = 0;
	iRear = iSubArraySize - 1;
	while(iFront < (iArrayaySize - iSubArraySize)) {
		iRear++;
		if(iMax < iArray[iRear]){
			iMax = iArray[iRear];
			printf("%i ", iMax);
			iFront++;
		} else {
			iFront++;
            iMax = iArray[iFront];
            for(iTemp1 = iFront + 1; iTemp1 <= iRear; iTemp1++){
                iMax = (iMax < iArray[iTemp1])? iArray[iTemp1]: iMax;
            }
			printf("%i ", iMax);
		}
	}
}
