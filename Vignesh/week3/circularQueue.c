#include<stdio.h>
int irear=-1;
int ifront=-1;
int iaqueue[8],isize=8;
int enqueue(){
	int value;
	scanf("%d",&value);
	if(irear==-1&&ifront==-1){
	irear=0;ifront=0;
		iaqueue[irear]=value;
	}
    else if((irear+1)%8!=ifront)
	{	irear=(	irear+1)%8;
		iaqueue[irear]=value;

	}
	else
	printf("\n/The queue is full\n");
	
return 0;
}
int dequeue(){
	if(irear==-1&&ifront==-1){
		printf("\nNo element\n");
	}
	else if((ifront)%8==irear){
		ifront=-1;
		irear=-1;
	}
	else if((ifront)%8!=irear){
		ifront=(ifront+1)%8;
	}
	return 0;
}
int display(){
	int istart=ifront,c=0;
	while(((istart)%8!=irear)&&c<8){
		printf("%d %d\n",iaqueue[(istart%8)],istart);
		istart=(istart+1)%8;  

		}
	printf("%d %d %d\n",iaqueue[(istart%8)],istart,irear);
return 0;
}
int main(){
	int ichoice=1;
	while(ichoice){
		printf("\nEnter the choice\n");
		scanf("%d",&ichoice);
		switch(ichoice){
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3:display();
			break;
		}
	}
	return 0;
}
