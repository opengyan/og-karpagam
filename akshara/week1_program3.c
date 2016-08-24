#include <stdio.h>
int main(void) {
	int num;
	scanf("%d\n",&num);
	while(num--){
		char str[500];
		int count=0,length=0,word=0,i=0;
		while(count<=3){
			scanf("%c",&str[i]);
			if(str[i]=='\n'){
				word++;
				count++;
			}
			else if(str[i]>=97&&str[i]<=122){
				i++;
				length++;
			}
			else
				word++;
		}

		float avg=length/word;
		if(avg>=8)
			printf("high\n");
			else if(avg>=4&&avg<8)
				printf("medium\n");
				else 
					printf("low\n");
	}
	return 0;
}

