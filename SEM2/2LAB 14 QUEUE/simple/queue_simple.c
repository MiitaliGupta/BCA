//Queue

#include "queue_sim_var.h"
#include "queue_sim_array.h"
#include "queue_linklistmodel.h"


int main()
{ char c;
int size,front,rear;
system("color 3");
start();
   do
   {
   	front=-1;
   	rear=-1;
	printf("\nMENU");
	printf("\n1.ARRAY MODEL");
	printf("\n2.LINKED LIST MODEL");
	printf("\n3.To Exit");
	printf("\nYour Choice : ");
	fflush(stdin);
	c = getchar();
	
		switch(c)
		{
			case '1' :
				array_model(&front,&rear,&size);
				break;
			case '2' :
				linklist_model(&front,&rear,&size);
				break;
			case '3' :
				system("color 3");
				break;
			default : 
			system("cls");
			start();
			system("color 4");
			printf("\nChoose Among 1,2,3.\n");
		}//switch

  		 }while(c!='3');
   
printf("\nLAB 14 TASK COMPLETED!!");
return 0;
}

int isfull(int front,int rear,int size)
{
  if( (rear+1) == size)
  return 1;
  else 
  return 0;
}

int isempty(int front,int rear)
{
  if(front>=rear)
  return 1;
  else 
  return 0;
}


