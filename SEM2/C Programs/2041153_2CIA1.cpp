//DS LAB CIA 1
//2041153
#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<ctype.h>
#define S 30

struct Employee
{
	int id,age;
	char name[S],des[S];
};typedef struct Employee emp;

void start();
void input(emp *p,int *n);
void display(emp *p,int *n);
void sortr(emp p[],int *n);
void binary(emp p[],int *n);
void del(emp p[],int *n);

int main(void)
{

int n;
char c;
start();
system("color 3");

dot :
	printf("\n\nEnter No. of Employees in the Database : ");
	scanf("%d",&n);
		if(n<=0)
		{
			system("color 4");
			printf("\n\aInvalid Input!!\nNumber of Employees should be greater than Zero.");
			goto dot;
		}
system("color a");
emp* s=(emp*)malloc(n*sizeof(emp));
emp *ptr;
ptr = s;
input(ptr,&n);

		do
		{
    		printf("\n\nMENU");
    		printf("\n1.Enter the Data");
			printf("\n2.Display the Data");
			printf("\n3.To Search Data using Binary Search");
			printf("\n4.To Delete the Data");
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
									printf("\n\nEnter No. of Employees in the Database : ");
									scanf("%d",&n);
										if(n<=0)
								  		{
										system("color 4");
										printf("\n\aInvalid Input!!\nNumber of Employees should be greater than Zero.");
										goto dot1;
										}
								system("color a");
								s=(emp*)malloc(n*sizeof(emp));
								ptr = s;
									input(ptr,&n);
								break;
							case '2':
							  display(ptr,&n);
							    break;
							case '3':
								binary(s,&n);
								break;
							case '4':
								
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
printf("\nCIA 1 TASK COMPLETED!!");
return 0;
}//main
