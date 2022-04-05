//Stack 
#include "test1.h"
#include "test2.h"

struct BOOKS
{
	int bid; //book id
	char bt[S]; //book title
	char ba[S]; //book Author
	struct BOOKS *next;
	
}*temp;typedef struct BOOKS bn;

void start()
{
	printf("\n");
	printf("\t\t\t\t\t\t LIBRARY DATABASE\n");
	printf("________________________________________________________________________________________________________________________\n");	
}//start
int main()
{ char c;

system("color 3");

   do
   {
   	start();
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
				array_model();
				break;
			case '2' :
				linklist_model();
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
   
printf("\nLAB 13 TASK COMPLETED!!");
return 0;
}

int overflow(int top,int size)
{
  if( (top+1) == size)
  return 1;
  else 
  return 0;
}

int underflow(int top)
{
  if(top == -1)
  return 1;
  else 
  return 0;
}

