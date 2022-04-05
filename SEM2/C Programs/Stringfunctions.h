#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define S 20

struct Strings
{
char x[S];	
};typedef struct Strings st;
char b[S];
void start()
{
	printf("\n");
	printf("\t\t\t\t\t\t STRING FUNCTIONS\n");
	printf("________________________________________________________________________________________________________________________\n");	
}//start

//INPUT FUNCTION
void input(st *p,int *n)
{
	int i;char c;
    system("cls");
    start();
    printf("\n\t\t\t..................................INPUT.....................................\n\n");
	for(i=0;i<*n;i++,p++)
		{ 
		  printf("\n\nEnter String %d : ",(i+1));
		  fflush(stdin);
		  gets(p->x);
		 // fgets(p->x,S,stdin);   		
		}
	system("cls");
	start();
}//input

//DISPLAY FUNCTION
void display(st *p,int *n)
{
system("cls");
    system("color 3");
    start();
    int i;
    printf("\n\t\t\t................................OUTPUT.....................................\n");
	for(i=0;i<*n;i++,p++)
	{   
		printf("\nSTRING %d : %s",(i+1),p->x);	
	}	
printf("\n________________________________________________________________________________________________________________________\n");		
}


//LENGTH FUNCTION
int slen(char a[])
{
	int count=0;
	while(a[count]!='\0'){
		count++;
	}
	return count;
}//slen

//LENGTH OPTIONS
void len(st *p,int n)
{
system("cls");
start();
system("color 3");
char c,temp[S];
int i,a;

	do
  	{
	printf("\n\nMENU");
	printf("\n1.Display length of All Strings from List\n");
	printf("2.Display length of a Particular String from List\n");
	printf("3.Display length of a New String\n");
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
							  for(i=0;i<n;i++)
							  printf("\nLength of \"%s\" is %d",p[i].x,slen(p[i].x));;
							  
							   break;
							case '2':
								system("cls");
								start();
								system("color a");
								printf("Enter String No. to Display Its Length : ");
								scanf("%d",&a);
								printf("\nLength of String \"%s\" : %d",p[a-1].x,slen(p[a-1].x));
									break;
							case '3':
							    system("cls");
								start();
								system("color a");
								printf("\n\nEnter New String  : ");
								  fflush(stdin);
								  //fgets(temp,S,stdin);'
								  gets(temp);
								printf("\nLength of New String \"%s\": %d",temp,slen(temp));     
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
}//len

//CONCAT FUNCTION
void scat(char a[],char b[])
{   int i,k=0;
	char c[slen(a)+slen(b)];
    for(i=0;i<slen(a);i++)
    	c[k++]=a[i];
    	
    c[k++]=' ';	
    
    for(i=0;i<slen(b);i++)
    	c[k++]=b[i];
    	
    c[k]='\0';
    printf("\nStrings after Concatenation : %s",c);
   //return c;
    
}//scat

//CONCAT OPTIONS
void cat(st *p,int n)
{
system("cls");
start();
system("color 3");
char c,temp1[S],temp2[S];
int i,a;

	do
  	{
	printf("\n\nMENU");
	printf("\n1.Concat Two Strings from List\n");
	printf("2.Concat a String from List to a New String\n");
	printf("3.Concat Two New Strings\n");
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
							  display(p,&n);
							  printf("\nEnter 1st String No. : ");
							  scanf("%d",&a);
							  printf("Enter 2nd String No. : ");
							  scanf("%d",&i);
							  scat(p[a-1].x,p[i-1].x);
							 // printf("\nStrings after Concatenation : %s",scat(p[a-1].x,p[i-1].x));
							   break;
							case '2':
								system("cls");
								start();
								system("color a");
								display(p,&n);
								printf("\nEnter 1st String No. : ");
							  	scanf("%d",&a);
							  	printf("\n\nEnter New String  : ");
								fflush(stdin);
								  //fgets(temp1,S,stdin);'
								gets(temp1);
								scat(p[a-1].x,temp1);
								//printf("\nStrings after Concatenation : %s",scat(p[a-1].x,temp1));
									break;
							case '3':
							    system("cls");
								start();
								system("color a");
								printf("\n\nEnter 1st String  : ");
								fflush(stdin);
								//fgets(temp1,S,stdin);'
								gets(temp1);
								
								printf("\n\nEnter 2nd String  : ");
								fflush(stdin);
								//fgets(temp1,S,stdin);'
								gets(temp2);
								scat(temp1,temp2);
								//printf("\nStrings after Concatenation : %s",scat(temp1,temp2));  
								
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
}//cat

//COPY FUNCTION
void scopy(char a[])
{   int i,k=0;
	char c[slen(a)];
    for(i=0;i<slen(a);i++)
    	c[k++]=a[i];
    	
    c[k]='\0';
    printf("\nOriginal String : %s",a);
    printf("\nCopied String : %s",c);
   
    
}//scopy

//COPY OPTIONS
void copy(st *p,int n)
{
	system("cls");
start();
system("color 3");
char c,temp1[S];
int i,a;

	do
  	{
	printf("\n\nMENU");
	printf("\n1.Copy a String from List\n");
	printf("2.Copy a New String \n");
	printf("3.Exit\nYour Choice : ");
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
							  display(p,&n);
							  printf("\nEnter String No. : ");
							  scanf("%d",&a);
							  scopy(p[a-1].x);
							  break;
							case '2':
								system("cls");
								start();
								system("color a");
							  	printf("\n\nEnter New String  : ");
								fflush(stdin);
								//fgets(temp1,S,stdin);'
								gets(temp1);
								scopy(temp1);
								
									break;
							case '3':
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
				
	}while(c!='3');		
}//cat

//REVERSE FUNCTION
char * srev(char a[])
{   int i,x;
    i=0;
	x=slen(a)-1;
	while(i<slen(a))
	{
	  b[i]= a[x];
	 i++;
	 x--;	
	}
	b[i]='\0'; 
	//printf("\nOriginal String : %s",a);
    //printf("\nReversed String : %s",b);
    return b;
    
}//srev

//REVERSE OPTIONS
void rev(st *p,int n)
{
	system("cls");
start();
system("color 3");
char c,temp1[S];
int i,a;

	do
  	{
	printf("\n\nMENU");
	printf("\n1.Reverse a String from List\n");
	printf("2.Reverse a New String \n");
	printf("3.Exit\nYour Choice : ");
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
							  display(p,&n);
							  printf("\nEnter String No. : ");
							  scanf("%d",&a);
							  printf("\nReversed String : %s", srev(p[a-1].x));
							  //srev(p[a-1].x);
							  break;
							case '2':
								system("cls");
								start();
								system("color a");
							  	printf("\n\nEnter New String  : ");
								fflush(stdin);
								//fgets(temp1,S,stdin);'
								gets(temp1);
								printf("\nReversed String : %s", srev(temp1));
								//srev(temp1);
								
									break;
							case '3':
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
				
	}while(c!='3');		
}//rev

//UPPER CASE
char * stoup(char a[])
{
	 int i,n=slen(a);
	for (i = 0;i<n; i++)
     	{
		    if( islower(a[i]) )
  			a[i] = a[i] -32;
  		}
  	return  a;
}

//LOWER CASE 
char * stolow(char a[])
{
	int i,n=slen(a);
	for (i = 0;i<n; i++)
     	{
     		if ( isupper(a[i]) )
		    a[i] = a[i] +32;
	    }
	return  a;
        }

// REVERT CASE
char * srevert(char a[]) 
{ int i,n=slen(a);
	for (i = 0;i<n; i++)
     	{
		    if( islower(a[i]) )
  			a[i] = a[i] -32;
  			
	        else if ( isupper(a[i]) )
		    a[i] = a[i] +32;
		  
	    }  
	return  a;
  	          
}

//CASE OPTIONS
void changecase(st *p,int n)
{
	system("cls");
start();
system("color 3");
char c,ch,temp1[S];
int i,a;

	do
  	{
	printf("\n\nMENU");
	printf("\n1.Change Case of a String from List\n");
	printf("2.Change Case of a New String \n");
	printf("3.Exit\nYour Choice : ");
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
							  display(p,&n);
							  printf("\nEnter String No. : ");
							  scanf("%d",&a);
							    
							  	printf("\n\nMENU");
								printf("\n1.Lower Case\n");
								printf("2.Upper Case\n");
								printf("3.Revert Case\n");
								printf("4.Exit\nYour Choice : ");
								fflush(stdin);	
								ch=getchar();
							     switch(ch)
							     {
							     	case '1':
							     		printf("\nOriginal String : %s",p[a-1].x);
   										printf("\nLower Case String : %s",stolow(p[a-1].x));
							     		break;
							     	case '2':
							     		printf("\nOriginal String : %s",p[a-1].x);
   										printf("\nUpper Case String : %s",stoup(p[a-1].x));
							     		break;
							     	case '3':
							     		printf("\nOriginal String : %s",p[a-1].x);
   										printf("\nReverted Case String : %s",srevert(p[a-1].x));
							     		break;
							     		case '4':
							     		break;
							     	default:
							     		system("cls");
										start();
										system("color 4");
										printf("\n\aChoose Among 1,2 and 3.\n");
								 }//nested switch
							  break;
							case '2':
								system("cls");
								start();
								system("color a");
							  	printf("\n\nEnter New String  : ");
								fflush(stdin);
								//fgets(temp1,S,stdin);'
								gets(temp1);
								printf("\n\nMENU");
								printf("\n1.Lower Case\n");
								printf("2.Upper Case\n");
								printf("3.Revert Case\n");
								printf("4.Exit\nYour Choice : ");
								fflush(stdin);	
								ch=getchar();
							     switch(ch)
							     {
							     	case '1':
							     		printf("\nOriginal String : %s",temp1);
   										printf("\nLower Case String : %s",stolow(temp1));
							     		break;
							     	case '2':
							     		printf("\nOriginal String : %s",temp1);
   										printf("\nUpper Case String : %s",stoup(temp1));
							     		break;
							     	case '3':
							     		printf("\nOriginal String : %s",temp1);
   										printf("\nReverted Case String : %s",srevert(temp1));
							     		break;
							     	case '4':
							     		break;
							     	default:
							     		system("cls");
										start();
										system("color 4");
										printf("\n\aChoose Among 1,2 and 3.\n");
								 }//nested switch
								
									break;
							case '3':
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
				
	}while(c!='3');		
}//changecase

//compare two strings
int scom(char a[], char d[] )
{
	int i=0,f=1;
	int l=slen(a);
	int l1=slen(d);
	if(l==l1)
    f=1;
    else
    f=0;
    if(f==1)
    {
	for(i=0; i<l; i++)
	{
        if(a[i]==d[i])
            f=1;
        else
		{
            f=0;
            break;
        }
    }//for
 	}//if


    return f;
}

//comparing ignoring cases
int sicom(char a[], char d[] )
{ 
int i=0,f=1,x,l,l1;

stolow(a);l=slen(a);
stolow(d);l1=slen(d);

    if(l==l1)
    f=1;
    else
    f=0;
    if(f==1)
    {
	for(i=0; i<x; i++)
	{
        if(a[i]==d[i])
            f=1;
        else
		{
            f=0;
            break;
        }
    }//for
	}//if

    return f;	
}//sicom

//COMPARE OPTIONS
void compare(st *p,int n)
{
	system("cls");
start();
system("color 3");
char c,ch,temp1[S],temp2[S];

int i,a;

	do
  	{
	printf("\n\nMENU");
	printf("\n1.Compare Two Strings from List\n");
	printf("2.Compare a String from List to a New String\n");
	printf("3.Compare Two New Strings\n");
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
							  display(p,&n);
							  printf("\nEnter 1st String No. : ");
							  scanf("%d",&a);
							  printf("Enter 2nd String No. : ");
							  scanf("%d",&i);
							  	printf("\n\nMENU");
								printf("\n1.Case Sensitive Comparision \n");
								printf("2.Compare Ignoring Cases\n");
								printf("3.Exit\nYour Choice : ");
								fflush(stdin);	
								ch=getchar();
							  switch(ch)
							     {
							     	case '1':
							     		if(scom(p[a-1].x,p[i-1].x)==1)
							     		printf("\nThe Strings \"%s\" and \"%s\" being Compared are Equal.",p[a-1].x,p[i-1].x);
							     		else
							     		printf("\nThe Strings \"%s\" and \"%s\" being Compared are Not Equal.", p[a-1].x,p[i-1].x);
							     		break;
							     	case '2':
							     		if(sicom(p[a-1].x,p[i-1].x)==1)
							     		printf("\nThe Strings \"%s\" and \"%s\" being Compared are Equal.", p[a-1].x,p[i-1].x);
							     		else
							     		printf("\nThe Strings \"%s\" and \"%s\" being Compared are Not Equal.", p[a-1].x,p[i-1].x);
							     		break;
							     	case '3':
							     		break;
							     	default:
							     		system("cls");
										start();
										system("color 4");
										printf("\n\aChoose Among 1,2 and 3.\n");
								 }//nested switch
							  
							   break;
							case '2':
								system("cls");
								start();
								system("color a");
								display(p,&n);
								printf("\nEnter 1st String No. : ");
							  	scanf("%d",&a);
							  	printf("\n\nEnter New String  : ");
								fflush(stdin);
								  //fgets(temp1,S,stdin);'
								gets(temp1);
									printf("\n\nMENU");
								printf("\n1.Case Sensitive Comparision \n");
								printf("2.Compare Ignoring Cases\n");
								printf("3.Exit\nYour Choice : ");
								fflush(stdin);	
								ch=getchar();
								switch(ch)
							     {
							     	case '1':
							     		if(scom(p[a-1].x,temp1)==1)
							     		printf("\nThe Strings \"%s\" and \"%s\" being Compared are Equal.", p[a-1].x,temp1);
							     		else
							     		printf("\nThe Strings \"%s\" and \"%s\" being Compared are Not Equal.", p[a-1].x,temp1);
							     		break;
							     	case '2':
							     		if(sicom(p[a-1].x,temp1)==1)
							     		printf("\nThe Strings \"%s\" and \"%s\" being Compared are Equal.", p[a-1].x,temp1);
							     		else
							     		printf("\nThe Strings \"%s\" and \"%s\" being Compared are Not Equal.", p[a-1].x,temp1);
							     		break;
							     	case '3':
							     		break;
							     	default:
							     		system("cls");
										start();
										system("color 4");
										printf("\n\aChoose Among 1,2 and 3.\n");
								 }//nested switch
								
									break;
							case '3':
							    system("cls");
								start();
								system("color a");
								printf("\n\nEnter 1st String  : ");
								fflush(stdin);
								//fgets(temp1,S,stdin);'
								gets(temp1);
								printf("\n\nEnter 2nd String  : ");
								fflush(stdin);
								//fgets(temp1,S,stdin);'
								gets(temp2);
								printf("\n\nMENU");
								printf("\n1.Case Sensitive Comparision \n");
								printf("2.Compare Ignoring Cases\n");
								printf("3.Exit\nYour Choice : ");
								fflush(stdin);	
								ch=getchar();
								switch(ch)
							     {
							     	case '1':
							     		if(scom(temp1,temp2)==1)
							     		printf("\nThe Strings \"%s\" and \"%s\" being Compared are Equal.", temp1,temp2);
							     		else
							     		printf("\nThe Strings \"%s\" and \"%s\" being Compared are Not Equal.", temp1,temp2);
							     		break;
							     	case '2':
							     		if(sicom(temp1,temp2)==1)
							     		printf("\nThe Strings \"%s\" and \"%s\" being Compared are Equal.", temp1,temp2);
							     		else
							     		printf("\nThe Strings \"%s\" and \"%s\" being Compared are Not Equal.", temp1,temp2);
							     		break;
							     	case '3':
							     		break;
							     	default:
							     		system("cls");
										start();
										system("color 4");
										printf("\n\aChoose Among 1,2 and 3.\n");
								 }//nested switch
								
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
}//compare


//PALLINDROME OPTIONS
void pal(st *p,int n)
{
system("cls");
start();
system("color 3");
char c,temp1[S];
int i,a;

	do
  	{
	printf("\n\nMENU");
	printf("\n1.To Check a String from List\n");
	printf("2.To Check a New String \n");
	printf("3.Exit\nYour Choice : ");
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
							  display(p,&n);
							  printf("\nEnter String No. : ");
							  scanf("%d",&a);
							  if(scom(p[a-1].x,srev(p[a-1].x) ) == 1 )           
								printf("\nString is PALINDROME");                               
							    else
							    printf("\nString is NOT PALINDROME");
							  break;
							case '2':
								system("cls");
								start();
								system("color a");
							  	printf("\n\nEnter New String  : ");
								fflush(stdin);
								//fgets(temp1,S,stdin);'
								gets(temp1);
								if(scom(temp1,srev(temp1) ) == 1 )           
								printf("\nString is PALINDROME");                               
							    else
							    printf("\nString is NOT PALINDROME");
									break;
							case '3':
								system("color 3");
								system("cls");
								start();
								break;
							default :
								system("cls");
								start();
								system("color 4");
								printf("\n\aChoose Among 1,2 and 3.\n");	
								
					}//switch
				}//else
				
	}while(c!='3');			
}//pal




 


