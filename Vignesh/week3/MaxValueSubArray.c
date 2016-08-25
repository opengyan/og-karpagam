#include<stdio.h>
int main(){
	int iarrsize,isubsize;
	scanf("%d %d",&iarrsize,&isubsize);
	int iarray[iarrsize],itraves1,itraves2,max=0;
	for(itraves1=0;itraves1<iarrsize;itraves1++){
		scanf("%d",&iarray[itraves1]);
	}
	
	for(itraves1=0;itraves1<=iarrsize-isubsize;itraves1++){
		
	for(itraves2=itraves1;itraves2<(itraves1+isubsize);itraves2++){
	if(iarray[itraves2]>max)
	max=iarray[itraves2];
}
printf("%d ",max);
max=0;
}
}
