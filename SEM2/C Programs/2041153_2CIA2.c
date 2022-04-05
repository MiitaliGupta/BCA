//2CIA 2
#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<ctype.h>
#define S 30

struct Product
{
	int pid;
	char pn[S];
	float pr;
};typedef struct Product pro;
//pro t;
void start()
{
	printf("\n\t\t\t\t\t\tPRODUCT DATABASE\n");
	printf("________________________________________________________________________________________________________________________\n");
	
}

void input(pro *p,int *n)
{  system("cls");
   start();
   printf("\n\t\t\t\t\t\t\tINPUT\n");
	printf("\t\t------------------------------------------------------------------------------------------\n");
	int i;
	for(i=0;i<*n;i++,p++)
	{
		printf("\n\nEnter Details of Product %d\n",i+1);
		do{
		printf("Enter Product Id : ");
		scanf("%d",&p->pid);
		}while(p->pid==0);
		fflush(stdin);
		printf("Enter Product Name : ");
	    fgets(p->pn,S,stdin);
	    do{
	    printf("Enter Product Price : ");
		scanf("%f",&p->pr);	
		}while(p->pr==0.0);
	}//for
   system("cls");
   start();
}//input

void display(pro *p,int *n)
{  system("cls");
   start();
   printf("\n\t\t\t\t\t\t\tOUTPUT\n");
	printf("\t\t------------------------------------------------------------------------------------------\n");
	int i;
	for(i=0;i<*n;i++,p++)
	{
		printf("\nProduct Id 	: %d\n",p->pid);
		printf("Product Name 	: %s",p->pn);
	    printf("Product Price   : %.2f\n",p->pr);
			
	}//for
		printf("________________________________________________________________________________________________________________________\n");
}//Display

void search(pro *p,int n)
{
	char c,x[S];
	int i;
	system("cls");
	start();
	do{
		printf("\n\nMENU");
    	printf("\n1.To Search Any Product by Name");
    	printf("\n2.Exit\nYour Choice : ");
		fflush(stdin);
			c = getchar();
			if(!isdigit(c))
			{   system("cls");
   				start();
				printf("\nINVALID INPUT.\nPLEASE ENTER A DIGIT.");
			}//if
			else
			{
				switch(c)
				{
				 case '1':
				 		system("cls");
						start();
						printf("Enter Product Name to be Searched : ");
						fflush(stdin);
	    				fgets(x,S,stdin);
	    				int flag=0;
	    				for(i=0;i<n;i++)
	    				{
	    					if(stricmp(p[i].pn,x)==0)
	    					{
	    						flag=1;
	    						break;
							}
						}
						
						if(flag==1)
						{
						printf("\nITEM FOUND IN DATABASE\n",x);
						printf("\nProduct Id 	: %d\n",p[i].pid);
						printf("Product Name 	: %s",p[i].pn);
					    printf("Product Price   : %.2f\n",p[i].pr);
					    }
						else
						printf("\nITEM NOT FOUND IN DATABASE\n",x);
				 case '2':
				 	break;
				 default:
				 	system("cls");
   					start();
				 	printf("\nINVALID INPUT.\nPLEASE CHOOSE BETWEEN 1 AND 2.\n");
				}
			}
		}while(c!='2');
}//linear search

void sort(pro *p,int n)
{  char c;
int i,j,x;
   pro t;
	system("cls");
	start();
	do{
		printf("\n\nMENU");
    	printf("\n1.To Sort Product by Price in Ascending Order");
    	printf("\n2.To Sort Product by Price in Descending Order");
    	printf("\n3.To Display Data");
    	printf("\n4.Exit\nYour Choice : ");
		fflush(stdin);
			c = getchar();
			if(!isdigit(c))
			{   system("cls");
   				start();
				printf("\nINVALID INPUT.\nPLEASE ENTER A DIGIT.");
			}//if
			else
			{
				switch(c)
				{
				 case '1':
				 		system("cls");
						start();
						for(i=0;i<n-1;i++)
							  {
							  	x=i;
							  	for(j=i+1;j<n;j++)
								  	if(p[j].pr<p[x].pr)
								  	x=j;
								
								t.pr=p[x].pr;
								p[x].pr=p[i].pr;
								p[i].pr=t.pr;
								
								t.pid=p[x].pid;
								p[x].pid=p[i].pid;
								p[i].pid=t.pid;
								
								strcpy(t.pn,p[x].pn);
								strcpy(p[x].pn,p[i].pn);
								strcpy(p[i].pn,t.pn);
									
							  }//i loop
							  
							  printf("\nDATA SORTED IN ASCENDING ORDER OF PRICE!!\nPRINT TO VIEW THE CHANGES.\n");
							   break;
				case '2':
					system("cls");
						start();
						for(i=0;i<n-1;i++)
							  {
							  	x=i;
							  	for(j=i+1;j<n;j++)
								  	if(p[j].pr>p[x].pr)
								  	x=j;
								
								t.pr=p[x].pr;
								p[x].pr=p[i].pr;
								p[i].pr=t.pr;
								
								t.pid=p[x].pid;
								p[x].pid=p[i].pid;
								p[i].pid=t.pid;
								
								strcpy(t.pn,p[x].pn);
								strcpy(p[x].pn,p[i].pn);
								strcpy(p[i].pn,t.pn);
									
							  }//i loop
							  
							  printf("\nDATA SORTED IN DESCENDING ORDER OF PRICE!!\nPRINT TO VIEW THE CHANGES.\n");
				 	break;
				case '3':
					display(p,&n);
				 	break;
				case '4':
				 	break;
				 default:
				 	system("cls");
   					start();
				 	printf("\nINVALID INPUT.\nPLEASE CHOOSE BETWEEN 1,2,3 AND 4.\n");
				}
			}
		}while(c!='4');
}//sort

main()
{
	start();
char c;
int n;
pro *p,*s;
	do{
		printf("\n\nMENU");
    	printf("\n1.Enter Product Data into Database");
		printf("\n2.Display the Data");
		printf("\n3.To Search Data According to Name");
		printf("\n4.To Sort Data According to Price");
		printf("\n5.Exit\nYour Choice : ");
		fflush(stdin);
			c = getchar();
			if(!isdigit(c))
			{   system("cls");
   				start();
				printf("\nINVALID INPUT.\nPLEASE ENTER A DIGIT.");
			}//if
			else
			{
				switch(c)
				{
				 case '1':
				 	//system("cls");
   				//	start();
				 	dot:
				 	printf("\nEnter No. of Products in the Database : ");
					scanf("%d",&n);
					if(n<=0)
					{
						printf("\nINVALID INPUT.\nNo.of Products should be Greater than 0.\n");
						goto dot;
					}	
					p=(pro*)malloc(n*sizeof(pro));
					//t=(pro*)malloc(n*sizeof(pro));
					//t=s;
					input(p,&n);
					break;
				 case '2':
				 	display(p,&n);
				 	break;
				 case '3':
				 	search(p,n);
				 	break;
				 case '4':
				 	sort(p,n);
				 	break;
				 case '5':
				 	break;
				 default:
				 	system("cls");
   					start();
				 	printf("\nINVALID INPUT.\nPLEASE CHOOSE BETWEEN 1,2,3,4 AND 5.\n");
				}//switch
			}//else
			
		}while(c!='5');
printf("\n\nCIA 2 TASK COMPLETED");
}//main
