#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<ctype.h>
#define S 20

int top=-1,size;
void start();
struct BOOK//ARRAY MODEL
{
	int bid; //book id
	char bt[S]; //book title
	char ba[S]; //book Author

}t,*s;typedef struct BOOK bk;


void array_model();
void arrpush();
void arrpop();
void arrpeek();
int underflow();
int overflow();
void rev();
void arrstackrev();


struct BOOKS//LINKLIST MODEL
{
	int bid; //book id
	char bt[S]; //book title
	char ba[S]; //book Author
	struct BOOKS *next;
	
}*temp,*head,*nn;typedef struct BOOKS bn;

void linklist_model();
void ll_push();
void ll_pop();
void ll_peek();
int underflow();
int overflow();
void ll_rev();
void ll_stackrev();



