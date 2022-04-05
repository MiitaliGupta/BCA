//link list 
#include<stdio.h>
#include<stdlib.h>
struct NODE
{
	int data;
	struct NODE *next;
};typedef struct NODE N;

N* createnode();

void main()
{
	N * head , *first,*i ;
	/*head = (N*) malloc(sizeof(N));
	head->data=10;
	head->next = NULL;//'\0';
//	printf("%d",head->data);*/

	head = createnode();
	//first = createnode();
	
	do
	{
		nnode=createnode();
		
	}
	
	/*first = (N*) malloc(sizeof(N));
	first->data=20;
	first->next=NULL;*/
	
	head->next = first;//'\0';
	
	for(i=head;i!=NULL;i=i->next)
	printf("->%d\n",i->data);

}

N* createnode()
{
	N * temp;
	temp = (N*) malloc(sizeof(N));
	printf("\nEnter the Data\t");
	scanf("%d",&temp->data);
	temp->next=NULL;
	
	return temp;
}
