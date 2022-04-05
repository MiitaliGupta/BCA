//This files contains structure declaration and its input and output function
#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<ctype.h>
#define S 20

struct BOOK
{
	int bid; //book id
	char bt[S]; //book title
	char ba[S]; //book Author
	struct BOOK *next;
};typedef struct BOOK bn;

void start()
{
	printf("\n");
	printf("\t\t\t\t\t\t STUDENT DATABASE\n");
	printf("________________________________________________________________________________________________________________________\n");	
}//start


bn* createnode()
{
	bn * temp;
	temp = (bn*) malloc(sizeof(bn));
	
	fflush(stdin);
		  printf("\nEnter Book Name : ");
		  gets(temp->bt); 
		  
		  fflush(stdin);
		  printf("Enter Author Name : ");
		  gets(temp->ba); 
		  
		  do
		  {
		  temp->bid = rand() % 100000;
		  }while((temp->bid)<=0);
	temp->next=NULL;
	
	return temp;
}//node creation

void input(bn* head,int *n)
{  int i;
   bn *j,*k,*nn;
    
	for(i=2;i<=*n;i++)
	{ printf("\n\nEnter Details of Book %d :\n",i);
		nn =createnode();
				      
	  for(j=head;j!=NULL;j=j->next)
		 k=j;
				      
	  k->next=nn;
					  	
	}//for
					
	system("cls");
	start();
}//input

void display(bn *head)
{	system("cls");
    start();
 bn* i;
  printf("\n\t\t\t................................OUTPUT.....................................\n");
 for(i=head;i!=NULL;i=i->next)
 {
 		printf("\nBOOK NAME   : %s",i->bt);
 		printf("\nAUTHOR NAME : %s",i->ba);
	    printf("\nBOOK ID     : %d\n",i->bid);
		
	}	
printf("________________________________________________________________________________________________________________________\n");
}//display




