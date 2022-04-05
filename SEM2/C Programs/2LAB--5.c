//DS LAB 5 INSERTION SORT
#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<ctype.h>
#define S 30

struct student
{
	char n[S]; //name
	int r; //rank
};typedef struct student st;

void start();
void input(st *p,int *n);
void display(st *p,int *n);
void namesort(st p[],int n);
void ranksort(st p[],int n);

main()
{
int n;
char c;
start();
system("color 3");
dot :
	printf("\n\nEnter No. of Student in the Database : ");
	scanf("%d",&n);
		if(n<=0)
		{
			system("color 4");
			printf("\n\aInvalid Input!!\nNumber of Student should be greater than Zero.");
			goto dot;
		}
system("color a");
st* s=(st*)malloc(n*sizeof(st));
st *ptr;
ptr = s;
input(ptr,&n);
		do
		{
    		printf("\n\nMENU");
    		printf("\n1.Enter New Data");
			printf("\n2.Display the Data");
			printf("\n3.To Sort Data According to Name");
			printf("\n4.To Sort Data According to Rank");
			printf("\n5.Exit\nYour Choice : ");
			fflush(stdin);	
			c=getchar();
				if(!isdigit(c))
				{
				system("cls");
				start();
				system("color 4");
				printf("\n\aEnter a Digit.");
				}
				else
				{
					switch(c)
						{
							case '1':
							dot1 :
									printf("\n\nEnter No. of Students in the Database : ");
									scanf("%d",&n);
										if(n<=0)
								  		{
										system("color 4");
										printf("\n\aInvalid Input!!\nNumber of Students should be greater than Zero.");
										goto dot1;
										}
								system("color a");
								s=(st*)realloc(s,n*sizeof(st));
								ptr = s;
									input(ptr,&n);
								break;
							case '2':
							   display(ptr,&n);
							    break;
							case '3':
								namesort(s,n);
								break;
							case '4':
								ranksort(s,n);
							    break;
							case '5':
								system("color 3");
							    break;
							default :
								system("cls");
								start();
								system("color 4");
								printf("\n\aChoose Between 1,2,3,4,5.\n");
						}//switch
				}//else
		}while(c!='5');
printf("\nLAB TASK 5 COMPLETED!!");
}

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
		  gets(p->n); 
		  printf("Enter Rank : ");
		  scanf("%d",&p->r);  	  		
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
	    printf("\nRANK	     : %d\n",p->r);
		
	}	
printf("________________________________________________________________________________________________________________________\n");	
}//display

void namesort(st p[],int n)
{
system("cls");
start();
system("color 3");
  char c,temp[S];
  int i,j,t;
	do
  	{
	printf("\n\nMENU");
	printf("\n1.Sort in Alphabetical Order\n");
	printf("2.Sort in Reverse Alphabetical Order\n");
	printf("3.Display the Data\n");
	printf("4.Exit\nYour Choice : ");
	fflush(stdin);	
			c=getchar();
				if(!isdigit(c))
				{
				system("cls");
		 		start();
				system("color 4");
				printf("\n\aEnter a Digit.");
				}
				else
				{
					switch(c)
						{ 
							case '1':
							  system("cls");
							  system("color a");
							  start();
							  for(i=1;i<n;i++)
							  { 
							  	t=p[i].r;
							    strcpy(temp,p[i].n);
							    j=i-1;
							    while(j>=0&&stricmp(p[j].n,temp)>0)
							    	{
							    		p[j+1].r=p[j].r;
							    		strcpy(p[j+1].n,p[j].n);
							    		j--;
									}//while
								p[j+1].r=t;	
							  	strcpy(p[j+1].n,temp);
							  }//for
							  printf("\nDATA SORTED IN ASCENDING ORDER OF NAMES!!\nPRINT TO VIEW THE CHANGES.\n");
							   break;
							case '2':
								system("cls");
							  system("color a");
							  start();
							  for(i=1;i<n;i++)
							  { 
							  	t=p[i].r;
							    strcpy(temp,p[i].n);
							    j=i-1;
							    while(j>=0&&stricmp(p[j].n,temp)<0)
							    	{
							    		p[j+1].r=p[j].r;
							    		strcpy(p[j+1].n,p[j].n);
							    		j--;
									}//while
								p[j+1].r=t;	
							  	strcpy(p[j+1].n,temp);
							  }//for
							  printf("\nDATA SORTED IN DESCENDING ORDER OF NAMES!!\nPRINT TO VIEW THE CHANGES.\n");
							   break;
							case '3':
							   display(p,&n);
							    break;
							case '4':
								system("color 3");
								system("cls");
								start();
								break;
							default :
								system("cls");
								start();
								system("color 4");
								printf("\n\aChoose Between 1 and 2.\n");	
								
					}//switch
				}//else
				
	}while(c!='4');
}//sorting acc to Name 

void ranksort(st p[],int n)
{
system("cls");
start();
system("color 3");
  char c,temp[S];
  int i,j,t;
	do
  	{
	printf("\n\nMENU");
	printf("\n1.Sort in Ascending Order\n");
	printf("2.Sort in Descending Order\n");
	printf("3.Display the Data\n");
	printf("4.Exit\nYour Choice : ");
	fflush(stdin);	
			c=getchar();
				if(!isdigit(c))
				{
				system("cls");
		 		start();
				system("color 4");
				printf("\n\aEnter a Digit.");
				}
				else
				{
					switch(c)
						{ 
							case '1':
							  system("cls");
							  system("color a");
							  start();
							  for(i=1;i<n;i++)
							  { 
							  	t=p[i].r;
							    strcpy(temp,p[i].n);
							    j=i-1;
							    while(j>=0&&p[j].r>t)
							    	{
							    		p[j+1].r=p[j].r;
							    		strcpy(p[j+1].n,p[j].n);
							    		j--;
									}//while
								p[j+1].r=t;	
							  	strcpy(p[j+1].n,temp);
							  }//for
							  printf("\nDATA SORTED IN ASCENDING ORDER OF RANK!!\nPRINT TO VIEW THE CHANGES.\n");
							   break;
							case '2':
								system("cls");
								start();
								system("color a");
								for(i=1;i<n;i++)
							  	{ 
								  	t=p[i].r;
								    strcpy(temp,p[i].n);
								    j=i-1;
								    while(j>=0&&p[j].r<t)
								    	{
								    		p[j+1].r=p[j].r;
								    		strcpy(p[j+1].n,p[j].n);
								    		j--;
										}//while
									p[j+1].r=t;	
							  		strcpy(p[j+1].n,temp);
							 	 }//for
							  printf("\nDATA SORTED IN DESCENDING ORDER OF RANK!!\nPRINT TO VIEW THE CHANGES.\n");
									break;
							case '3':
							   display(p,&n);
							    break;
							case '4':
								system("color 3");
								system("cls");
								start();
								break;
							default :
								system("cls");
								start();
								system("color 4");
								printf("\n\aChoose Between 1 and 2.\n");	
								
					}//switch
				}//else
				
	}while(c!='4');	
}//sorting acc to rank



