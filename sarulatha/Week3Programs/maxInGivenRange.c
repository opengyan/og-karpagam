#include <stdio.h>

#include<limits.h>


int main()
{

    int iSize, iloop, jloop;

    scanf("%d",&iSize);

    int iArr[iSize], k, iMax = INT_MIN, front = 0, rear = 0;

    for(iloop = 0; iloop < iSize; iloop++)

        scanf("%d",&iArr[iloop]);

    scanf("%d",&k);

    int iQueue[k];

    for(iloop = 0; iloop < iSize - k; iloop++) {

        front = 0; rear = 0;

        for(jloop = iloop; jloop <= (iloop + k); jloop++) {

            iQueue[rear] = iArr[jloop];
 
            if(iMax < iQueue[rear])

                iMax = iQueue[rear];

            rear++;

        }

        printf("%d ", iMax);

    }

    return 0;

}
