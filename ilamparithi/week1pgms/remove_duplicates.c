#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char a[10000];
	scanf("%s",a);
	int l=strlen(a)-1;
	for(int i=0;i<l;i++){
		for(int j=0;j<l;j++){
			if(i!=j){
				if(a[i]==a[j]){
					a[j]='*';
				}
			}
		}
	}
	for(int i=0;i<l;i++){
		if(a[i]!='*'){
			printf("%c",a[i]);
		}
	}
	return 0;
}
