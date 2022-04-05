//DS LAB 10
#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<ctype.h>
#define S 20
void start();
void input_display();
void naive();
void imp_naive();
void KMP();
void computeLPSArray(char* sub, int m, int* lps) ;

void main()
{
int n;
char c;
start();
FILE *ptr;
system("color 3");

		do
		{
    		printf("\n\nMENU");
    		printf("\n1.Enter or Append New Data into File or To Display the Existing Data");
			printf("\n2.To Find the Index of Substring using Naive Pattern Matching");
			printf("\n3.To Find the Index of Substring using Improved Naive Pattern Matching");
			printf("\n4.To Find the Index of Substring using KMP Pattern Matching");
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
								input_display();
								break;
							case '2':
							  naive();
							    break;
							case '3':
								imp_naive();
								break;
							case '4':
								KMP();
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
printf("\nLAB TASK 10 COMPLETED!!");
}//main


void start()
{
	printf("\n");
	printf("\t\t\t\t\t\t PATTERN MATCHING\n");
	printf("________________________________________________________________________________________________________________________\n");	
}//start


void input_display()
{   char x,c[S];
	FILE *ptr;
	 system("cls");
    start();
    
		printf("\n\nMENU");
    		printf("\n1.Enter New Data into File");
			printf("\n2.Append Data into the File");
			printf("\n3.Display the Data");
			printf("\nYour Choice : ");
			fflush(stdin);
			scanf("%c",&x);
			if(x=='1')
			ptr = fopen("File1.txt", "w+");	
			else if (x=='2')
			ptr = fopen("File1.txt", "a+");	
			else
			printf("\nINVALID INPUT");
		if(x=='1'||x=='2')
		{   printf("\n\t\t\t..................................INPUT.....................................\n\n");
			fflush(stdin); 
		    printf("\nEnter the Data Into the file : "); 
		    gets(c);
		    fputs(c, ptr);
		    rewind(ptr);//pointer points to the begining
		    fclose(ptr);
	    }
if(x=='3')
{
	system("cls");
    system("color 3");
    start();
    int i;
    char ch;
    printf("----------------------------------------------------DATA IN THE FILE----------------------------------------------------\n"); 
    ptr = fopen("File1.txt", "r");
    do
    {
    ch = getc(ptr);
	putchar(ch);
	}while (ch!= EOF); //while(!feof(ptr));
    rewind(ptr);
	fclose(ptr);	
printf("\n_______________________________________________________________________________________________________________________\n");	
		}
}//Input and Display

void naive()
{   
char sub[S],ch,*temp;
int i,j,k,n=0,m,flag=0,count =0;
FILE *ptr;
	system("cls");
    system("color 3");
    start();
    printf("----------------------------------------------------NAIVE PATTERN MATCHING-----------------------------------------------\n"); 
    printf("Enter the String you want to Search : ");
    fflush(stdin);
    gets(sub);
    ptr = fopen("File1.txt", "r");
    m = strlen(sub); 
    
    do
    {
    ch = getc(ptr);
	n++;
	}while (ch!= EOF);
	rewind(ptr);
	
	temp = (char*)malloc(n*sizeof(char));
	ch = getc(ptr);
	i=0;
	do
    {
    temp[i]=ch;
    ch = getc(ptr);
    i++;
	}while (ch!= EOF);
	rewind(ptr);
	
    //printf("----------------------------------------------------DATA IN THE FILE----------------------------------------------------\n"); 
	//puts(temp);
    
    for (i = 0; i <= n-m; i++) 
	{ 
        for (j = 0; j < m; j++) 
            if (temp[i + j] != sub[j]) 
                {
				count++;
				break;
				}
  
        if (j == m) 
        { 
		flag =1;
        printf("\nPattern found at Position %d ", i+1); 
	    }
	}//ith loop
	
	if(flag==0)
	printf("\n\nPattern Not Found "); 
	
	printf("\nComparsions are done %d Times",count);
}//NAIVE

void imp_naive()
{
char sub[S],ch,*temp;
int i,j,k,n=0,m,flag=0,count=0;
FILE *ptr;
	system("cls");
    system("color 3");
    start();
    printf("----------------------------------------------------IMPROVED NAIVE PATTERN MATCHING---------------------------------------\n"); 
    printf("Enter the String you want to Search : ");
    fflush(stdin);
    gets(sub);
    ptr = fopen("File1.txt", "r");
    m = strlen(sub); 
    
    do
    {
    ch = getc(ptr);
	n++;
	}while (ch!= EOF);
	rewind(ptr);
	
	temp = (char*)malloc(n*sizeof(char));
	ch = getc(ptr);
	i=0;
	do
    {
    temp[i]=ch;
    ch = getc(ptr);
    i++;
	}while (ch!= EOF);
	rewind(ptr);
	
	//printf("----------------------------------------------------DATA IN THE FILE----------------------------------------------------\n"); 
	//puts(temp);
	
	i=0;
	while (i <= n - m) 
    { 
        for (j = 0; j < m; j++) 
           { 
		   if (temp[i+j] != sub[j]) 
		   { 	count++;
                break;
            }
        }
  
        if (j == m)  
        {  
			flag=1;
           printf("\nPattern found at position %d", i+1); 
           i = i + m; 
        } 
        else if (j == 0) 
           i = i + 1; 
        else
           i = i + j; 
    } //while
    if(flag==0)
	printf("\n\nPattern Not Found "); 
	printf("\nComparsions are done %d Times",count);
} 

void KMP() 
{ 
    char sub[S],ch,*temp;
int i,j,k,n=0,m,flag=0,lps[S],count=0;
FILE *ptr;
	system("cls");
    system("color 3");
    start();
    printf("----------------------------------------------------KMP PATTERN MATCHING--------------------------------------------------\n"); 
    printf("Enter the String you want to Search : ");
    fflush(stdin);
    gets(sub);
    ptr = fopen("File1.txt", "r");
    m = strlen(sub); 
    
    do
    {
    ch = getc(ptr);
	n++;
	}while (ch!= EOF);
	rewind(ptr);
	
	temp = (char*)malloc(n*sizeof(char));
	ch = getc(ptr);
	i=0;
	do
    {
    temp[i]=ch;
    ch = getc(ptr);
    i++;
	}while (ch!= EOF);
	rewind(ptr);
	
	
	m = strlen(sub); 
    n = strlen(temp); 
   
    lps[m]; 
  
    
    computeLPSArray(sub, m, lps); 
  
     i = 0; 
     j = 0; 
    while (i < n) { 
        if (sub[j] == temp[i])
		 {  count++;
            j++; 
            i++; 
        } 
  
        if (j == m)
		 { 
            printf("\nFound pattern at index %d ", (i - j)+1); 
            j = lps[j - 1]; 
        } 
  
       
        else if (i < n && sub[j] != temp[i])
		 { 
            
            if (j != 0) 
                j = lps[j - 1]; 
            else
                i = i + 1; 
        } 
    } 
    printf("\nComparsions are done %d Times",count);
} 
  

void computeLPSArray(char* sub, int m, int* lps) 
{ 
  
    int len = 0; 
  
    lps[0] = 0; 
  
   
    int i = 1; 
    while (i < m) { 
        if (sub[i] == sub[len]) { 
            len++; 
            lps[i] = len; 
            i++; 
        } 
        else
        { 
            
            if (len != 0) { 
                len = lps[len - 1]; 
  
            } 
            else 
            { 
                lps[i] = 0; 
                i++; 
            } 
        } 
    } 
} 
		




















