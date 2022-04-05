//DS LAB 8 MERGE SORT
#include "Domain.h"

void namesort(st p[],int n);
void ranksort(st p[],int n);

void mergesort_rankasc(int s,int e,st p[],int n);
void merge_rankasc(int s,int m,int e,st p[],int n);
void mergesort_rankdsc(int s,int e,st p[],int n);
void merge_rankdsc(int s,int m,int e,st p[],int n);

void mergesort_nameasc(int s,int e,st p[],int n);
void merge_nameasc(int s,int m,int e,st p[],int n);
void mergesort_namedsc(int s,int e,st p[],int n);
void merge_namedsc(int s,int m,int e,st p[],int n);


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
								ns=malloc(n*sizeof(nst)); //temp struct
								dd=ns;
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
printf("\nLAB TASK 8 COMPLETED!!");
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
							  printf("\nITERATIONS : \n\n");
							  	mergesort_nameasc(0,n-1,p,n);
							  printf("\nDATA SORTED IN ASCENDING ORDER OF NAME!!\nPRINT TO VIEW THE CHANGES.\n");
							   break;
							case '2':
								system("cls");
								start();
								system("color a");
								printf("\nITERATIONS : \n\n");
								mergesort_namedsc(0,n-1,p,n);
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
								printf("\nITERATIONS : \n\n");
							  	mergesort_rankasc(0,n-1,p,n);
								printf("\nDATA SORTED IN ASCENDING ORDER OF RANK!!\nPRINT TO VIEW THE CHANGES.\n");
							   break;
							case '2':
								system("cls");
								start();
								system("color a");
								printf("\nITERATIONS : \n\n");
								mergesort_rankdsc(0,n-1,p,n);
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

void mergesort_rankasc(int s,int e,st p[],int n)
{ int m;
	if(s<e)
	{ 
		m=(s+e)/2;
		mergesort_rankasc(s,m,p,n);
		mergesort_rankasc(m+1,e,p,n);
		merge_rankasc(s,m,e,p,n);
	}
}

void merge_rankasc(int s,int m,int e,st p[],int n)
{
int s1,m1,i=s,k,j;
s1=s;
m1=m+1;

	  while(s1<=m && m1<=e)
	  {
	  	if(p[s1].r<=p[m1].r)
	  	{
	  	  	dd[i].tr=p[s1].r;
	  	  	strcpy(dd[i].tn,p[s1].n);
	  	  	s1=s1+1;
		}
		else 
		{
			dd[i].tr=p[m1].r;
			strcpy(dd[i].tn,p[m1].n);
			m1=m1+1;
		}
		i=i+1;
	  }//while
	  
	 if(s1>m)
	 { 
	 for(k=m1;k<=e;k++)
	  {
	  	  	dd[i].tr=p[k].r;
	  	  	strcpy(dd[i].tn,p[k].n);
	  	  	i=i+1;
	  }
	 }//if
		else 
		{
			for(k=s1;k<=m;k++)
			{
			dd[i].tr=p[k].r;
			strcpy(dd[i].tn,p[k].n);
			i=i+1;
		    }
	    }//else
		    for(k=s;k<=e;k++)
			{
			p[k].r=dd[k].tr;
			strcpy(p[k].n,dd[k].tn);
		
		    }
		    //iterations	
		    for(j=0;j<n;j++)
		    printf("%d	",p[j].r);
		    printf("\n");
}//rank asc

void mergesort_rankdsc(int s,int e,st p[],int n)
{ int m;
	if(s<e)
	{ 
		m=(s+e)/2;
		mergesort_rankdsc(s,m,p,n);
		mergesort_rankdsc(m+1,e,p,n);
		merge_rankdsc(s,m,e,p,n);
	}
}

void merge_rankdsc(int s,int m,int e,st p[],int n)
{
int s1,m1,i=s,k,j;
s1=s;
m1=m+1;
	  while(s1<=m && m1<=e)
	  {
	  	if(p[s1].r>=p[m1].r)
	  	{
	  	  	dd[i].tr=p[s1].r;
	  	  	strcpy(dd[i].tn,p[s1].n);
	  	  	s1=s1+1;
		}
		else 
		{
			dd[i].tr=p[m1].r;
			strcpy(dd[i].tn,p[m1].n);
			m1=m1+1;
		}
		i=i+1;
	  }//while
	  
	 if(s1>m)
	 { 
	 for(k=m1;k<=e;k++)
	  {
	  	  	dd[i].tr=p[k].r;
	  	  	strcpy(dd[i].tn,p[k].n);
	  	  	i=i+1;
	  }
	 }//if
		else 
		{
			for(k=s1;k<=m;k++)
			{
			dd[i].tr=p[k].r;
			strcpy(dd[i].tn,p[k].n);
			i=i+1;
		    }
	    }//else
		    for(k=s;k<=e;k++)
			{
			p[k].r=dd[k].tr;
			strcpy(p[k].n,dd[k].tn);
		
		    }
	 		 //iterations	
		    for(j=0;j<n;j++)
		    printf("%d	",p[j].r);
		    printf("\n");
}//rank asc

void mergesort_nameasc(int s,int e,st p[],int n)
{ int m;
	if(s<e)
	{ 
		m=(s+e)/2;
		mergesort_nameasc(s,m,p,n);
		mergesort_nameasc(m+1,e,p,n);
		merge_nameasc(s,m,e,p,n);
	}
}

void merge_nameasc(int s,int m,int e,st p[],int n)
{
int s1,m1,i=s,k,j;
s1=s;
m1=m+1;
	  while(s1<=m && m1<=e)
	  {
	  	if(stricmp(p[s1].n,p[m1].n)<=0)
	  	{
	  	  	dd[i].tr=p[s1].r;
	  	  	strcpy(dd[i].tn,p[s1].n);
	  	  	s1=s1+1;
		}
		else 
		{
			dd[i].tr=p[m1].r;
			strcpy(dd[i].tn,p[m1].n);
			m1=m1+1;
		}
		i=i+1;
	  }//while
	  
	 if(s1>m)
	 { 
	 for(k=m1;k<=e;k++)
	  {
	  	  	dd[i].tr=p[k].r;
	  	  	strcpy(dd[i].tn,p[k].n);
	  	  	i=i+1;
	  }
	 }//if
		else 
		{
			for(k=s1;k<=m;k++)
			{
			dd[i].tr=p[k].r;
			strcpy(dd[i].tn,p[k].n);
			i=i+1;
		    }
	    }//else
		    for(k=s;k<=e;k++)
			{
			p[k].r=dd[k].tr;
			strcpy(p[k].n,dd[k].tn);
		
		    }
	 		 //iterations	
		    for(j=0;j<n;j++)
		    printf("%s",p[j].n);
		    printf("\n");
}//name asc

void mergesort_namedsc(int s,int e,st p[],int n)
{ int m;
	if(s<e)
	{ 
		m=(s+e)/2;
		mergesort_namedsc(s,m,p,n);
		mergesort_namedsc(m+1,e,p,n);
		merge_namedsc(s,m,e,p,n);
	}
}

void merge_namedsc(int s,int m,int e,st p[],int n)
{
int s1,m1,i=s,k,j;
s1=s;
m1=m+1;
	  while(s1<=m && m1<=e)
	  {
	  	if(stricmp(p[s1].n,p[m1].n)>=0)
	  	{
	  	  	dd[i].tr=p[s1].r;
	  	  	strcpy(dd[i].tn,p[s1].n);
	  	  	s1=s1+1;
		}
		else 
		{
			dd[i].tr=p[m1].r;
			strcpy(dd[i].tn,p[m1].n);
			m1=m1+1;
		}
		i=i+1;
	  }//while
	  
	 if(s1>m)
	 { 
	 for(k=m1;k<=e;k++)
	  {
	  	  	dd[i].tr=p[k].r;
	  	  	strcpy(dd[i].tn,p[k].n);
	  	  	i=i+1;
	  }
	 }//if
		else 
		{
			for(k=s1;k<=m;k++)
			{
			dd[i].tr=p[k].r;
			strcpy(dd[i].tn,p[k].n);
			i=i+1;
		    }
	    }//else
		    for(k=s;k<=e;k++)
			{
			p[k].r=dd[k].tr;
			strcpy(p[k].n,dd[k].tn);
		
		    }
		    
		    //iterations	
		    for(j=0;j<n;j++)
		    printf("%s",p[j].n);
		    printf("\n");
	 		
}//name dsc
	
    	
    	









