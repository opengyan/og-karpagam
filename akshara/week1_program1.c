#include<stdio.h>
int main(void) {
	int num;
	scanf("%d",&num);
	int a[num][2], index, j;
	for(index = 0; index < num; index ++) {
		scanf("%d,%d",&a[index][0], &a[index][1]);
	}
	for(index = 0; index < num; index ++) {
		for(j = 0; j < num; j ++) {
			if(a[j][0] != 0 && a[j][1] != 0) {
				if(a[j][0] > a[index][0] && a[j][0] <= a[index][1]) {
					if(a[j][1] > a[index][1])
						a[index][1] = a[j][1];
						a[j][0] = a[j][1] = 0;
						j = 0;
				}	
			}
		}
	}
	for(index = 0; index < num; index ++) {
		if(a[index][0] != 0 && a[index][1] != 0){
			printf("[%d,%d]\n",a[index][0],a[index][1]);
		}
	}
	return 0;
}
