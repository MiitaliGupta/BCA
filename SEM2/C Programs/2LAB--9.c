//LAB 9 strings functions
#include"Stringfunctions.h"

main(void)
{
int n;
char c;
start();
system("color 3");
do
{
			printf("\n\nMENU");
    		printf("\n1.Enter Strings");
			printf("\n2.Display the Data");
			printf("\n3.To find Length of any String");
			printf("\n4.To Concatenate to Strings");
			printf("\n5.To Copy any String");
			printf("\n6.To find Reverse of any String");
			printf("\n7.To check if a String is Pallindrome or not");
			printf("\n8.To Change Case of any Strings");
			printf("\n9.To Compare 2 Strings");
			printf("\n0.Exit\nYour Choice : ");
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
								printf("\n\nEnter No. of Strings : ");
										scanf("%d",&n);
										if(n<=0)
								  		{
										system("color 4");
										printf("\n\aInvalid Input!!\nNumber of Strings should be greater than Zero.");
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
								input(s,&n);
								}
								break;
							case '2':
							   display(s,&n);
							    break;
							case '3':
								len(s,n);
								break;
							case '4':
								cat(s,n);
							    break;
							case '5':
								copy(s,n);
							    break;
							case '6':
								rev(s,n);
							    break;
							case '7':
								pal(s,n);
							    break;
							case '8':
								changecase(s,n);
							    break;
							case '9':
								compare(s,n);
							    break;
							case '0':
								system("color 3");
							    break;
							default :
								system("cls");
								start();
								system("color 4");
								printf("\n\aChoose Among 1,2,3,4,5,6,7,8,9 and 0.\n");
						}//switch
				}//else
	}while(c!='0');
	printf("\nLAB TASK 9 COMPLETED!!");
}//main





