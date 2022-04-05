//LAB 11 and 12
#include"LL_Domain.h"
#include"LL_insertion.h"
#include"LL_deletion.h"


int main()
{ char c;
  stn *head;
  int i,n;
  start();
system("color 3");

   do
   {
	printf("\nMENU");
	printf("\n1.Enter Data into Student Database");
	printf("\n2.To Display the Data");
	printf("\n3.To Insert Data");
	printf("\n4.To Delete Data");
	printf("\n5.To Exit");
	printf("\nYour Choice : ");
	fflush(stdin);
	c = getchar();
	
		switch(c)
		{
			case '1' :
				dot1 :
				printf("\n\nEnter No. of Students in the Database : ");
				scanf("%d",&n);
				if(n<=0)
				{
					printf("\nInvalid Input!!\nNumber of Students should be greater than Zero.");
					goto dot1;
				}//if
				system("color a");
				system("cls");
			    start();
			    printf("\n\t\t\t..................................INPUT.....................................\n\n");
				printf("\n\nEnter Details of Student 1 :\n");
					head=createnode();
				input(head,&n);
				break;
			case '2' :
				display(head);
				break;
			case '3' :
				insert(head,&n);
				break;
			case '4' :
				deletenode(head,&n);
				break;
			case '5' :
				system("color 3");
				break;
			default : 
			system("cls");
			start();
			system("color 4");
			printf("\nChoose Among 1,2,3,4,5.\n");
		}//switch

   }while(c!='5');
   
printf("\nLAB 11 & 12 TASK COMPLETED!!");
return 0;
}


