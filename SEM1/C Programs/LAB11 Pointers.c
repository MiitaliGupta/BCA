//LAB--11
//Pointers and call by value n reference
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int isNumeric(char str[100]);
int isName(char str[100]);
void input();
float salary(char d[100],char hr[100],char r[100]);
void show();
void sort(int *mar,int n);



char t,ch,i[100],f[100],emp[100],d[100],hr[100],r[100];
int j,w,x,y,z,n,n1,mar[100];
float n2,sal;


int main(void)
  {

printf("The Following Program Demonstrates the usage of Pointers function calling by Value and by Reference\n");

   do
   {
	printf("\n\nTo print the Address of an Integer data type and Floating data type press 1\n");
	printf("To Demonstrate function calling by Value press 2\n");
	printf("To Demonstrate function calling by Reference press 3\n");
    printf("Your Choice : ");
    fflush(stdin);
    scanf("%c",&ch);
    if(isdigit(ch))
    {
    switch(ch)
    {
        case '1':
      	{ 
		  fflush(stdin);
	      printf("Enter an Integer number : ");
	      gets(i);
	      n1=atoi(i); //inbuilt function changes string into integer
	      x=isNumeric(i);//calling function to check if input is a number
	      
	      fflush(stdin);
	      printf("Enter an Float number : ");
	      gets(f);
	      n2=atof(f); //inbuilt function changes string into float
	      y=isNumeric(f);//calling function to check if input is a number
	      
	    if(x==1&&y==1)
        {
        	printf("The Address of Integer type data is : %u\n",&n1);
        	printf("The Address of Float type data is : %u\n",&n2);
        	
		}//if
		else 
         printf("Invaid Input.\nPlease enter a numeric value.");
      		break;
		}//case1
	    
		
		case '2':
      	{ 
      	    input();
      	    w=isName(emp);
      	    if(w==1)//1
			{
			x=isNumeric(d);
			y=isNumeric(hr);
			z=isNumeric(r);
			if(x==1&&y==1&&z==1)//2
			{
				show();
			}//if2
		    else //else2
             printf("Invaid Input.\nPlease enter a numeric value for Hour, Day, Rate.");
             }//if1
		    else//else1 
             printf("Invaid Input.\nEmployee Name Can only Contain Alphabets and Spaces");
      		break;
		}//case2
		
		
		case '3':
      	{ 
		  printf(" Lets find out Best Three Scores of a Player in Various Matches \n\n");
		  fflush(stdin);
		  printf("Enter name of the player : ");
		  gets(emp);
		  w=isName(emp);
      	    if(w==1)//1
			{
      	  printf("How many matches did the player play : ");
      	  scanf("%s",&d);
      	  n = atoi(d);
      	  x=isNumeric(d);
      	  if(x==1)//2
        {
      	  if(n>=3)//3
      	  {
      	  printf("Enter enter runs scored by the player in various matches : \n");
      	  for(j=0;j<n;j++)
      	  scanf("%d",&mar[j]);
    
		  sort(mar, n);
		  printf("Top three Scores of %s  : ",emp);
		  for(j=0;j<3;j++)
		  printf("%d ",mar[j]);
	      }//if3
	      	else//else3
	          printf("No. of matches played by the player must be Atleast 3");
       	  }//if2
		    else //else2
             printf("Invaid Input.\nPlease enter a numeric value for No. of matches.");
	       }//if1
		    else//else1 
             printf("Invaid Input.\nPlayer Name Can only Contain Alphabets and Spaces");

          
      	  
      	
      		break;
		}//case3
		
		
		default:
        printf("Invalid choice.\nChoose from 1 , 2 or 3");
    }//switch
    }//if
    else 
     printf("Invaid Input.\nPlease enter a digit.");
printf("\n\n");
fflush(stdin);
printf("Do You want to Try Again\nIf Yes press 1\nOtherwise press any key\nYour choice : ");
scanf("%c",&t);	
}while(t=='1');


printf("\nLAB--11 Task Complete");
return(0);	
}


void input()
{
	      printf("Enter details of an Employee to Calculate his/her Salary\n\n");
          fflush(stdin);
	      printf("Enter Employee name : ");
	      gets(emp);
	      fflush(stdin);
	      printf("Enter number of Hours worked per day : ");
      	  gets(hr);
      	  fflush(stdin);
		  printf("Enter number of Days worked : ");
      	  gets(d);
      	  fflush(stdin);
      	  printf("Enter payment rate per hour : ");
      	  gets(r);
}
float salary(char d[100],char hr[100],char r[100])
{ 
int da;
float s,h,ra;
da= atoi(d);
h= atof(hr);
ra= atof(r);

s = h*da*ra;
return s;
}

void show()
{ 
int da;
float s,h,ra;
da= atoi(d);
h= atof(hr);
ra= atof(r);
	sal = salary(d,hr,r);
	printf("\n\nEmployee name : %s\n",emp);
	printf("Number of days worked : %d\n",da);
	printf("Number of hours worked per day : %.2f\n",h);
    printf("Payment Rate per hour : %.2f\n",ra);
    printf("Salary : %.2f\n",sal);
}

void sort(int *mar,int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
    { 
        for(j=0;j<(n-i-1);j++)
       {//comparjng the adjacent elements
            if (*(mar+j) < *(mar+j+1))
            {
                //swappjng
                temp = *(mar+j);
                *(mar+j) = *(mar+j+1);
                *(mar+j+1) = temp;
                
	        }//if
        }//j loop
    }//j loop
}


int isNumeric(char str[100])
 {int i,f=1;
   for ( i = 0; i < strlen(str); i++)
   {  if(str[i] == '.')
      f=1;
      else if (isdigit(str[i]))
	  f=1;
	   else
	  {
	  f = 0;
	  break;
      }
    
   }
   return f;
}

int isName(char str[100])
{
	int i,k;
    	for (i = 0; i<strlen(str); i++)
     	{
  	    	if ( isalpha(str[i]) || isspace(str[i])) 
  	    	  k=1;
  	        else 
  	         {
			  k=0;  
			  break;
		     }
	    }
   return k;
}
