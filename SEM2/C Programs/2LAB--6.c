//DS LAB 5 SELECTION SORT
#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<ctype.h>
#define S 30

struct mobiles
{
	char name[S]; //name
	int ram,sto ; //ram,storage
};typedef struct mobiles mo;

void start();
void input(mo *p,int *n);
void display(mo *p,int *n);
void namesort(mo p[],int n);
void ramsort(mo p[],int n);
void stosort(mo p[],int n);

main()
{
int n;
char c;
start();
system("color 3");
dot :
	printf("\n\nEnter No. of Mobiles in the Database : ");
	scanf("%d",&n);
		if(n<=0)
		{
			system("color 4");
			printf("\n\aInvalid Input!!\nNumber of Student should be greater than Zero.");
			goto dot;
		}
system("color a");
mo* s=(mo*)malloc(n*sizeof(mo));
mo *ptr;
ptr = s;
input(ptr,&n);
		do
		{
    		printf("\n\nMENU");
    		printf("\n1.Enter New Data");
			printf("\n2.Display the Data");
			printf("\n3.To Sort Data According to Name");
			printf("\n4.To Sort Data According to Ram");
			printf("\n5.To Sort Data According to Storage");
			printf("\n6.Exit\nYour Choice : ");
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
									printf("\n\nEnter No. of Mobiles in the Database : ");
									scanf("%d",&n);
										if(n<=0)
								  		{
										system("color 4");
										printf("\n\aInvalid Input!!\nNumber of Mobiles should be greater than Zero.");
										goto dot1;
										}
								system("color a");
								s=(mo*)realloc(s,n*sizeof(mo));
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
								ramsort(s,n);
							    break;
							case '5':
								stosort(s,n);
							    break;
							case '6':
								system("color 3");
							    break;
							default :
								system("cls");
								start();
								system("color 4");
								printf("\n\aChoose Between 1,2,3,4,5.\n");
						}//switch
				}//else
		}while(c!='6');
printf("\nLAB TASK 6 COMPLETED!!");
}

void start()
{
	printf("\n");
	printf("\t\t\t\t\t\t MOBILE DATABASE\n");
	printf("________________________________________________________________________________________________________________________\n");	
}//start

void input(mo *p,int *n)
{   
	int i;char c;
    system("cls");
    start();
    printf("\n\t\t\t..................................INPUT.....................................\n\n");
	for(i=0;i<*n;i++,p++)
		{ 
		  printf("\n\nEnter Details of Model %d :\n",(i+1));
		  fflush(stdin);
		  printf("Enter Mobile Name : ");
		  gets(p->name); 
		  do
		  {
		  printf("Enter RAM : ");
		  scanf("%d",&p->ram); 
		  }while((p->ram)<=0);
		  
		  do
		  {
		  printf("Enter Storage : ");
		  scanf("%d",&p->sto); 
		  }while((p->sto)<=0); 		  		
		}
	system("cls");
	start();	
}//input

void display(mo *p,int *n)
{   system("cls");
    system("color 3");
    start();
    int i;
    printf("\n\t\t\t................................OUTPUT.....................................\n");
	for(i=0;i<*n;i++,p++)
	{   
		printf("\nMOBILE NAME  : %s",p->name);
	    printf("\nRAM	     : %d GB",p->ram);
	    printf("\nSTORAGE	     : %d GB\n",p->sto);
		
	}	
printf("________________________________________________________________________________________________________________________\n");	
}//display


void namesort(mo p[],int n)
{
system("cls");
start();
system("color 3");
  char c,temp[S];
  int i,j,t,k;
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
							  for(i=0;i<n-1;i++)
							  {
							  	t =i;
							  	for(j=i+1;j<n;j++)
								  	if(stricmp(p[j].name,p[t].name)<0)
								  	t=j;
								
								k=p[t].ram;
								p[t].ram=p[i].ram;
								p[i].ram=k;
								
								k=p[t].sto;
								p[t].sto=p[i].sto;
								p[i].sto=k;
								
								strcpy(temp,p[t].name);
								strcpy(p[t].name,p[i].name);
								strcpy(p[i].name,temp);
									
							  }//i loop
							  
							  printf("\nDATA SORTED IN ASCENDING ORDER OF NAME!!\nPRINT TO VIEW THE CHANGES.\n");
							   break;
							case '2':
								system("cls");
								start();
								system("color a");
								
								for(i=0;i<n-1;i++)
							  {
							  	t =i;
							  	for(j=i+1;j<n;j++)
								  	if(stricmp(p[j].name,p[t].name)>0)
								  	t=j;
								
								k=p[t].ram;
								p[t].ram=p[i].ram;
								p[i].ram=k;
								
								k=p[t].sto;
								p[t].sto=p[i].sto;
								p[i].sto=k;
								
								strcpy(temp,p[t].name);
								strcpy(p[t].name,p[i].name);
								strcpy(p[i].name,temp);
									
							  }//i loop
							  
								
							  printf("\nDATA SORTED IN DESCENDING ORDER OF NAME!!\nPRINT TO VIEW THE CHANGES.\n");
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
}//sorting acc to NAME

void ramsort(mo p[],int n)
{

system("cls");
start();
system("color 3");
  char c,temp[S];
  int i,j,t,k;
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
							  for(i=0;i<n-1;i++)
							  {
							  	t =i;
							  	for(j=i+1;j<n;j++)
								  	if(p[j].ram<p[t].ram)
								  	t=j;
								
								k=p[t].ram;
								p[t].ram=p[i].ram;
								p[i].ram=k;
								
								k=p[t].sto;
								p[t].sto=p[i].sto;
								p[i].sto=k;
								
								strcpy(temp,p[t].name);
								strcpy(p[t].name,p[i].name);
								strcpy(p[i].name,temp);
									
							  }//i loop
							  
							  printf("\nDATA SORTED IN ASCENDING ORDER OF RAM!!\nPRINT TO VIEW THE CHANGES.\n");
							   break;
							case '2':
								system("cls");
								start();
								system("color a");
								
								for(i=0;i<n-1;i++)
							  {
							  	t =i;
							  	for(j=i+1;j<n;j++)
								  	if(p[j].ram>p[t].ram)
								  	t=j;
								
								k=p[t].ram;
								p[t].ram=p[i].ram;
								p[i].ram=k;
								
								k=p[t].sto;
								p[t].sto=p[i].sto;
								p[i].sto=k;
								
								strcpy(temp,p[t].name);
								strcpy(p[t].name,p[i].name);
								strcpy(p[i].name,temp);
									
							  }//i loop
							  
								
							  printf("\nDATA SORTED IN DESCENDING ORDER OF RAM!!\nPRINT TO VIEW THE CHANGES.\n");
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
}//sorting acc to RAM	

void stosort(mo p[],int n)
{
system("cls");
start();
system("color 3");
  char c,temp[S];
  int i,j,t,k;
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
							  for(i=0;i<n-1;i++)
							  {
							  	t =i;
							  	for(j=i+1;j<n;j++)
								  	if(p[j].sto<p[t].sto)
								  	t=j;
								
								k=p[t].ram;
								p[t].ram=p[i].ram;
								p[i].ram=k;
								
								k=p[t].sto;
								p[t].sto=p[i].sto;
								p[i].sto=k;
								
								strcpy(temp,p[t].name);
								strcpy(p[t].name,p[i].name);
								strcpy(p[i].name,temp);
									
							  }//i loop
							  
							  printf("\nDATA SORTED IN ASCENDING ORDER OF STORAGE!!\nPRINT TO VIEW THE CHANGES.\n");
							   break;
							case '2':
								system("cls");
								start();
								system("color a");
								
								for(i=0;i<n-1;i++)
							  {
							  	t =i;
							  	for(j=i+1;j<n;j++)
								  	if(p[j].sto>p[t].sto)
								  	t=j;
								
								k=p[t].ram;
								p[t].ram=p[i].ram;
								p[i].ram=k;
								
								k=p[t].sto;
								p[t].sto=p[i].sto;
								p[i].sto=k;
								
								strcpy(temp,p[t].name);
								strcpy(p[t].name,p[i].name);
								strcpy(p[i].name,temp);
									
							  }//i loop
							  
								
							  printf("\nDATA SORTED IN DESCENDING ORDER OF STORAGE!!\nPRINT TO VIEW THE CHANGES.\n");
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
}//sorting acc to storage
