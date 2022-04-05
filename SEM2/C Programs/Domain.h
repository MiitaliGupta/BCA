//This files contains structure declaration and its input and output function
#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<ctype.h>
#define S 20

struct student
{
	char n[S]; //name
	int r; //rank
};typedef struct student st;

struct newstudent //temp student struct
{
	char tn[S]; //name
	int tr; //rank
};typedef struct newstudent nst;  nst *dd,*ns;

void start()
{
	printf("\n");
	printf("\t\t\t\t\t\t STUDENT DATABASE\n");
	printf("________________________________________________________________________________________________________________________\n");	
}//start

void input(st *p,int *n)
{   
	int i;char c;
    system("cls");
    start();
    printf("\n\t\t\t..................................INPUT.....................................\n\n");
	for(i=0;i<*n;i++,p++)
		{ 
		  printf("\n\nEnter Details of Student %d :\n",(i+1));
		  fflush(stdin);
		  printf("Enter Student Name : ");
		  fgets(p->n,S,stdin); 
		  do
		  {
		  //printf("Enter Rank : ");
		  //scanf("%d",&p->r); 
		  p->r = rand() % S;
		  }while((p->r)<=0); 	  		
		}
	system("cls");
	start();	
}//input

void display(st *p,int *n)
{   system("cls");
    system("color 3");
    start();
    int i;
    printf("\n\t\t\t................................OUTPUT.....................................\n");
	for(i=0;i<*n;i++,p++)
	{   
		printf("\nSTUDENT NAME : %s",p->n);
	    printf("RANK	     : %d\n",p->r);
		
	}	
printf("________________________________________________________________________________________________________________________\n");	
}//display

