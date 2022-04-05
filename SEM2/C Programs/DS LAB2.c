//DS Program 2 Deletion
//color 3 2 4 aqua green red
#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<ctype.h>
struct library
{
  char bn[50],an[50];
  int id;
 	
};typedef struct library lib;

void input(lib *p,int *n);
void display(lib *p,int *n);
void del(lib p[], int *n);


void main()
{
printf("LAB 2 DELETION PROGRAM");
int n,a;
char c;
int f=1;

do
{
printf("\n\nEnter No. of Books in the Database : ");
scanf("%d",&n);
if(n<=0)
{
printf("\n\aInvalid Input!!\nNumber of Books should be greater than Zero.");
f=0;
}
else
f=1;
}while(f==0);


a=n+50;
lib l[a],*ptr;
ptr = l;
input(ptr,&n);

do
{
    printf("\n\nMENU");
	printf("\n1.Display the Data");
	printf("\n2.Delete values from Database");
	printf("\n3.Exit\nYour Choice : ");
fflush(stdin);	
c=getchar();
if(!isdigit(c))
{
printf("\n\aEnter a Digit.");
}
else
{
switch(c)
{
case '1':
	display(ptr,&n);
     break;
case '2':
	del(l,&n);
	break;
case '3':
    break;
default :
	printf("\n\aChoose Between 1,2,3.\n");
}//switch
}//else
}while(c!='3');


}//main


void input(lib *p,int *n)
{   
    
	int i;
	for(i=0;i<*n;i++,p++)
	{
	  printf("\n\nEnter Details of Book %d :\n",(i+1));	
	  fflush(stdin);
	  printf("Enter Book Name : ");
	  gets(p->bn);
	  fflush(stdin);	
	  printf("Enter Author Name : ");
	  gets(p->an);
	  printf("Enter Book Id : ");
	  scanf("%d",&p->id);  		
	}
		
}//input

void display(lib *p,int *n)
{   
   	int i;
  
	for(i=0;i<*n;i++,p++)
	{   
	    printf("\nBOOK NO.    : %d",(i+1));
		printf("\nBOOK NAME   : %s",p->bn);
		printf("\nAUTHOR NAME : %s",p->an);
		printf("\nBOOK ID     : %d\n",p->id);	
	}	

}//display

void del(lib p[], int *n)
{   int x,i,f=1;
    lib *j;
    
	printf("\nEnter the Position from which the Data is to be Deleted : ");
	scanf("%d",&x);
	if(x<1||x>*n)
	{
	
        printf("\n\aInvalid Input!!\nEnter a Valid Book No.\n");
        
	}//if
	else
	{
	
	x=x-1;
    for(i=x;i<*n;i++)
    {  
    	strcpy(p[x].bn,p[x+1].bn);
    	strcpy(p[x].an,p[x+1].an);
    	p[x].id = p[x+1].id	;
	}
    	
	*n=*n-1;
	
	printf("\n\nDATABASE UPDATED!!");
	}//else	
}//delete

