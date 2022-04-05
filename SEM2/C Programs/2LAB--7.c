//DS LAB 7 QUICK SORT
#include "Domain.h"

void namesort(st p[],int n);
void nameasc(st p[],int s,int e);
void namedsc(st p[],int s,int e);
void ranksort(st p[],int n);
void rankasc(st p[],int s,int e);
void rankdsc(st p[],int s,int e);

main()
{
int n;
char c;
st *ptr;
start();
system("color 3");

		do
		{
    		printf("\n\nMENU");
    		printf("\n1.Enter Student Data into Database");
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
								dot1:
								printf("\n\nEnter No. of Students in the Database : ");
										scanf("%d",&n);
										if(n<=0)
								  		{
										system("color 4");
										printf("\n\aInvalid Input!!\nNumber of Students should be greater than Zero.");
										goto dot1;
										}
								system("color a");
								st* s=malloc(n*sizeof(st));
								if(s==NULL)
								{
									printf("\nMemory Block of Entered Size Not Found.\nTerminating Program....");
									exit(0);
								}
								else
								{
								ptr = s;
								input(ptr,&n);
								}
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
								printf("\n\aChoose Among 1,2,3,4,5.\n");
						}//switch
				}//else
		}while(c!='5');
printf("\nLAB TASK 7 COMPLETED!!");
}//main

void namesort(st p[],int n)
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
							  start();
							  system("color a");
							  	nameasc(p,0,(n-1));
							  printf("\nDATA SORTED IN ASCENDING ORDER OF NAME!!\nPRINT TO VIEW THE CHANGES.\n");
							   break;
							case '2':
								system("cls");
								start();
								system("color a");
									namedsc(p,0,(n-1));
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
								printf("\n\aChoose Among 1,2,3 and 4.\n");	
								
					}//switch
				}//else
				
	}while(c!='4');		
}//name sort

void nameasc(st p[],int s,int e)
{
int i,j,temp,key;
char t[S];
	if(s<e)
	{
		key=s;
		i=s;
		j=e;
		while(i<j)
		{
			while(stricmp(p[i].n,p[key].n)<=0&&i<e)
			i++;
			while(stricmp(p[j].n,p[key].n)>0)
			j--;
			
			if(i<j)
			{ 
			  temp =p[i].r;
			  p[i].r=p[j].r;
			  p[j].r=temp;
			  
			  strcpy(t,p[i].n);
			  strcpy(p[i].n,p[j].n);
			  strcpy(p[j].n,t);	
			  
			}//if
		}//while
	temp =p[j].r;
	p[j].r=p[key].r;
	p[key].r=temp;
	
	strcpy(t,p[j].n);
	strcpy(p[j].n,p[key].n);
	strcpy(p[key].n,t);
	
	nameasc(p,s,j-1);
	nameasc(p,j+1,e);
	}//if	
}//name in ascending order

void namedsc(st p[],int s,int e)
{
	int i,j,temp,key;
char t[S];
	if(s<e)
	{
		key=s;
		i=s;
		j=e;
		while(i<j)
		{
			while(stricmp(p[i].n,p[key].n)>=0&&i<e)
			i++;
			while(stricmp(p[j].n,p[key].n)<0)
			j--;
			
			if(i<j)
			{ 
			  temp =p[i].r;
			  p[i].r=p[j].r;
			  p[j].r=temp;
			  
			  strcpy(t,p[i].n);
			  strcpy(p[i].n,p[j].n);
			  strcpy(p[j].n,t);	
			  
			}//if
		}//while
	temp =p[j].r;
	p[j].r=p[key].r;
	p[key].r=temp;
	
	strcpy(t,p[j].n);
	strcpy(p[j].n,p[key].n);
	strcpy(p[key].n,t);
	
	namedsc(p,s,j-1);
	namedsc(p,j+1,e);
	}//if	
}//name in descending order

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
							  	rankasc(p,0,(n-1));
								printf("\nDATA SORTED IN ASCENDING ORDER OF RANK!!\nPRINT TO VIEW THE CHANGES.\n");
							   break;
							case '2':
								system("cls");
								start();
								system("color a");
									rankdsc(p,0,(n-1));
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
								printf("\n\aChoose Among 1,2,3 and 4.\n");	
								
					}//switch
				}//else
				
	}while(c!='4');		
}//rank sort

void rankasc(st p[],int s,int e)
{
int i,j,temp,key;
char t[S];
	if(s<e)
	{
		key=s;
		i=s;
		j=e;
		while(i<j)
		{
			while(p[i].r<=p[key].r&&i<e)
			i++;
			while(p[j].r>p[key].r)
			j--;
			
			if(i<j)
			{ 
			  temp =p[i].r;
			  p[i].r=p[j].r;
			  p[j].r=temp;
			  
			  strcpy(t,p[i].n);
			  strcpy(p[i].n,p[j].n);
			  strcpy(p[j].n,t);	
			  
			}//if
		}//while
	temp =p[j].r;
	p[j].r=p[key].r;
	p[key].r=temp;
	
	strcpy(t,p[j].n);
	strcpy(p[j].n,p[key].n);
	strcpy(p[key].n,t);
	
	rankasc(p,s,j-1);
	rankasc(p,j+1,e);
	}//if	
}//rank in ascending order

void rankdsc(st p[],int s,int e)
{
	int i,j,temp,key;
char t[S];
	if(s<e)
	{
		key=s;
		i=s;
		j=e;
		while(i<j)
		{
			while(p[i].r>=p[key].r&&i<e)
			i++;
			while(p[j].r<p[key].r)
			j--;
			
			if(i<j)
			{ 
			  temp =p[i].r;
			  p[i].r=p[j].r;
			  p[j].r=temp;
			  
			  strcpy(t,p[i].n);
			  strcpy(p[i].n,p[j].n);
			  strcpy(p[j].n,t);	
			  
			}//if
		}//while
	temp =p[j].r;
	p[j].r=p[key].r;
	p[key].r=temp;
	
	strcpy(t,p[j].n);
	strcpy(p[j].n,p[key].n);
	strcpy(p[key].n,t);
	
	rankdsc(p,s,j-1);
	rankdsc(p,j+1,e);
	}//if	
}//rank in descending order

