#include<stdio.h>
void InsertData();
void DeleteValue();
void DisplayQueue();
int iMax;
int iCircularQueue[1000];
int iFront = -1, iRear = -1;
int main()
{
    printf("Enter the queue size: ");
    scanf("%d", &iMax);
    int iChoice;
    while(1)
    {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice:");
        scanf("%d", &iChoice);
        switch(iChoice)
        {
            case 1:
                InsertData();
                break;
            case 2:
                DeleteValue();
                break;
            case 3:
                DisplayQueue();
                break;
            case 4:
                return 0;
        }
    }
    return 0;
}

void InsertData()
{
    int addItem;
    if((iFront == 0 && iRear == iMax - 1) || (iFront == iRear + 1))
    {
    	printf("\n Queue Overflow...!\n");
        return;
    }
    if(iFront == -1)
    {
        iFront = 0;
        iRear = 0;
    } else {
    	if(iRear == iMax - 1)
            iRear = 0;
        else
            iRear = iRear + 1;
    }
    scanf("%d", &addItem);
    iCircularQueue[iRear] = addItem;
    printf("\nElement inserted...!\n");
}
void DeleteValue() {
    if(iFront == -1) {
    	printf("\nQueue Underflow...\n");
        return;
    }
    printf("\nElement Deleted: %d \n",iCircularQueue[iFront]);
    if(iFront == iRear) {
        iFront = -1;
        iRear=-1;
    } else {
        if(iFront == iMax - 1) {
            iFront = 0;
        } else  iFront = iFront + 1;
    }
}
void DisplayQueue() {
    int iCount;
    int iFrontPos = iFront;
    int iRearPos = iRear;
    if(iFront == -1) {
        printf("\nQueue is empty...!\n");
        return;
    }
    printf("\n Queue elements: \n");
    if(iFrontPos <= iRearPos) {
        while(iFrontPos <= iRearPos) {
        	printf("%d ", iCircularQueue[iFrontPos]);
            iFrontPos++;
        }
    } else {
        while(iFrontPos <= iMax - 1) {
            printf("%d ",iCircularQueue[iFrontPos]);
        	iFrontPos++;
        }
        iFrontPos=0;
        while(iFrontPos <= iRearPos) {
            printf("%d ",iCircularQueue[iFrontPos]);
            iFrontPos++;
        }
    }
    printf("\n");
    for(iCount = 0; iCount < iMax; iCount++) {
        printf("%d ", iCircularQueue[iCount]);
    }
    printf("\n");
}

//Neat indent and variable names. Display though keeps the index as 1 for first number in queue. normally it could be that first slot is empty.
