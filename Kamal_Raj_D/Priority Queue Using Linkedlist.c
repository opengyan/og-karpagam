/*
Compilation error :

Kamal_Raj_D badhrins$ gcc Priority\ Queue\ Using\ Linkedlist.c 
Priority Queue Using Linkedlist.c:24:2: warning: implicit declaration of function 'printQueue' is invalid in C99 [-Wimplicit-function-declaration]
        printQueue(sHead);
        ^
Priority Queue Using Linkedlist.c:52:6: error: conflicting types for 'printQueue'
void printQueue(node *sHead){
     ^
Priority Queue Using Linkedlist.c:24:2: note: previous implicit declaration is here
        printQueue(sHead);
        ^
1 warning and 1 error generated.
*/

//Doesnt handle for negative number in queue size

#include<stdio.h>
#include<stdlib.h>
typedef struct list {
	int iData;
	int iPrior;
	struct list *next;
} node;
node *insert(node *, node *);
void printNode(node *);

int main(){
	node *sHead = NULL, *sTemp, *sCurrentNode, *sNewNode;
	int iNumber, iTemp;
    printf("Enter the Queue size: ");
	scanf("%i", &iTemp);
	while(iTemp--){
		sNewNode = malloc(sizeof(node));
		printf("Enter values: ");
		scanf("%i", &(sNewNode -> iData));
		printf("Enter priority values: ");
		scanf("%i",&(sNewNode -> iPrior));
		sNewNode -> next = NULL;
		sHead = insert(sHead, sNewNode);
	}
	printQueue(sHead);
	return 0;
}
node *insert(node *sHead, node *sNewNode){
	node *sTemp = sHead,*sCurretNode = NULL;
	if(sHead == NULL){
		return sNewNode;
	}
	while(sTemp != NULL) {
		if(sTemp -> iPrior > sNewNode -> iPrior){
			if(sCurretNode == NULL) {
				sNewNode -> next = sHead;
				sHead = sNewNode;
			}
			else {
				sNewNode -> next = sCurretNode -> next;
				sCurretNode -> next = sNewNode;
			}
			break;
		}
		sCurretNode = sTemp;
		sTemp = sTemp -> next;
	}
	if(sTemp == NULL){
		sCurretNode -> next = sNewNode;
	}
	return sHead;
}/*
void printQueue(node *sHead){
	node *sTemp = sHead;
	printf("Values in Queue:\n");
	while(sTemp != NULL){
		printf("%i ", sTemp -> iData);
		if(sTemp -> next != NULL) {
            printf(" -> ");
		}
		sTemp = sTemp -> next;
	}
}*/
