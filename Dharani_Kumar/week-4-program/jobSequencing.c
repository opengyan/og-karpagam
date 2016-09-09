#include<stdio.h>
#include<stdlib.h>
typedef struct job{
	int deadLine;
	int profit;
	char jobName;
	struct job *next;
}node;
node *insertList(node *head,node *nn){
	node *sTemp=head,*cn=NULL;
	if(head==NULL){
		return nn;
	}
	while(sTemp!=NULL){
		if(sTemp->profit<nn->profit){
			if(cn==NULL){
				nn->next=head;
				head=nn;
			}
			else{
				nn->next=cn->next;
				cn->next=nn;
			}
			break;
		}
		cn=sTemp;
		sTemp=sTemp->next;
	}
	if(sTemp==NULL){
		cn->next=nn;
	}
	return head;
}
char *selectJob(node *jobHead,int maxJobDeadline){
	char *finalJobName,temp;
	finalJobName=malloc((maxJobDeadline+1)*(sizeof(char)));
	for(temp=0;temp<=maxJobDeadline;temp++){
		finalJobName[temp]='#';
	}
	node *tempNode=jobHead;
	while(tempNode!=NULL){
		if(finalJobName[tempNode->deadLine]=='#'){
			finalJobName[tempNode->deadLine]=tempNode->jobName;
		}
		else{
			for(temp=tempNode->deadLine-1;temp>=1;temp--){
				if(finalJobName[temp]=='#'){
					finalJobName[temp]=tempNode->jobName;
					break;
				}		
			}
		}
		tempNode=tempNode->next;
	}
	return finalJobName;
}
int main(){
	int jobCount,maxJobDeadline=0,temp;
	printf("ENTER THE COUNT OF JOBS:");
	scanf("%i",&jobCount);
	node *jobHead=NULL,*nn;
	for(temp=0;temp<jobCount;temp++){
		nn=malloc(sizeof(node));
		printf("\n\n\nENTER JOB ID :");
		scanf("\n%c",&nn->jobName);
		printf("ENTER JOB DEADLINE :");
		scanf("%i",&nn->deadLine);
		printf("ENTER JOB PROFIT :");
		scanf("%i",&nn->profit);
		jobHead=insertList(jobHead,nn);
		maxJobDeadline=(maxJobDeadline>nn->deadLine) ? maxJobDeadline : nn->deadLine;
	}
	char *finalJobName=selectJob(jobHead,maxJobDeadline);
	for(temp=1;temp<=maxJobDeadline;temp++){
		if(finalJobName[temp]!='#'){
			printf("%c ",finalJobName[temp]);
		}
	}
}
