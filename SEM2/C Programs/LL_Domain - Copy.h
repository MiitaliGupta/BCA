//This files contains structure declaration and its input and output function
#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<ctype.h>
#define S 20

struct studentnode
{
	char n[S]; //name
	int r; //roll no.
	struct studentnode *next;
};typedef struct studentnode stn;


void start()
{
	printf("\n");
	printf("\t\t\t\t\t\t STUDENT DATABASE\n");
	printf("________________________________________________________________________________________________________________________\n");	
}//start


stn* createnode()
{
	stn * temp;
	temp = (stn*) malloc(sizeof(stn));
	fflush(stdin);
		  printf("Enter Student Name : ");
		  gets(temp->n); 
		  do
		  {
		  temp->r = rand() % 60;
		  }while((temp->r)<=0);
	temp->next=NULL;
	
	return temp;
}//node creation

void input(stn* head,int *n)
{  int i;
   stn *j,*k,*nn;
    
	for(i=2;i<=*n;i++)
	{ printf("\n\nEnter Details of Student %d :\n",i);
		nn =createnode();
				      
	  for(j=head;j!=NULL;j=j->next)
		 k=j;
				      
	  k->next=nn;
					  	
	}//for
					
	system("cls");
	start();
}//input

void display(stn *head)
{	system("cls");
    system("color 3");
    start();
 stn* i;
  printf("\n\t\t\t................................OUTPUT.....................................\n");
 for(i=head;i!=NULL;i=i->next)
 {
 		printf("\nSTUDENT NAME : %s",i->n);
	    printf("\nROLL NO.     : %d\n",i->r);
		
	}	
printf("________________________________________________________________________________________________________________________\n");
}//display




