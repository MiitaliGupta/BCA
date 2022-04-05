#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<ctype.h>
#define S 20

void linklist_model(int *front,int *rear,int *size);
void array_model(int *front,int *rear,int *size);

struct restaurant//ARRAY MODEL
{
	long num; //contact number
	char name[S]; //customer name
	int tnum; //table number
   struct restaurant *next;
   
}temp,*t;typedef struct restaurant res;


void start()
{
	printf("\n");
	printf("\t\t\t\t\t\t RESTAURANT RESERVATION SYSTEM\n");
	printf("________________________________________________________________________________________________________________________\n");	
}//start

void arr_enqueue(res *s,int *rear,int *front,int size);
void arr_dequeue(res *s,int *rear,int *front,int size);
void arr_front(res *s,int rear,int front);
void arr_rear(res *s,int rear,int front);
void arr_printq(res *s,int front,int rear);
void arrqueuerev(res *s,int *rear,int *front,int size);

void ll_enqueue(res **head,int *rear,int *front,int size);
void ll_dequeue(res **head,int *rear,int *front,int size);
void ll_front(res *head,int rear,int front);
void ll_rear(res *head,int rear,int front);
void ll_printq(res *head,int front,int rear);
