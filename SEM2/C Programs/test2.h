#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<ctype.h>
#define S 20



void ll_push(bn **head,int *top,int size);
void ll_pop(bn **head,int *top);
void ll_peek(bn *head,int *top);
int underflow(int top);
int overflow(int top,int size);

void ll_start()
{
	printf("\n");
	printf("\t\t\t\t\t\t LINKED LIST MODEL LIBRARY DATABASE\n");
	printf("________________________________________________________________________________________________________________________\n");	
}//start

void linklist_model()
{
  char c;
  int n,top = -1,i;
  bn * j;
  bn* head = (bn *)malloc(sizeof(bn));
  ll_start();
system("color 3");
system("cls");
 ll_start();

   do
   {
	printf("\nMENU");
	printf("\n1.To Set Limit of No. of Books");
	printf("\n2.To Push Data into Library Database");
	printf("\n3.To Pop Data from Library Database");
	printf("\n4.To Peek Data from Library Database");
	//printf("\n5.To Reverse Popped Data");
	//printf("\n6.To Reverse the stack and Work with LINKED LIST MODEL");
	printf("\n7.To Exit");
	printf("\nYour Choice : ");
	fflush(stdin);
	c = getchar();
	
		switch(c)
		{
			case '1' :
				dot1 :
				printf("\n\nEnter No. of Books in the Database : ");
				scanf("%d",&n);
				if(n<=0)
				{
					system("color 4");
					printf("\nInvalid Input!!\nNumber of Books should be greater than Zero.");
					goto dot1;
				}//if
				
				system("color a");
				system("cls");
			     ll_start();
				
				 printf("DATABASE LIMIT SET TO %d\n",n);
				
				break;
			case '2' :
				ll_push(&head,&top,n);
				
				
 		
			/*	for(j=head;j!=NULL;j=j->next)
				 {
				 		printf("\nBOOK NAME   : %s",j->bt);
				 		printf("\nAUTHOR NAME : %s",j->ba);
					    printf("\nBOOK ID     : %d\n",j->bid);
						
				}
				*/
				break;
			case '3' :
				
				ll_pop(&head,&top);
				if(top!=-1)
				{
				
				system("color a");
				system("cls");
			     ll_start();
					
				printf("\nBOOK DATA POPPED FROM STACK");
				printf("\n\nPOPPED STUDENT DATA : ");
				printf("\nBOOK ID     : %d",temp->bid);
				printf("\nBOOK NAME   : %s",temp->bt);
		 		printf("\nAUTHOR NAME : %s\n",temp->ba);
		 		free(temp);
		 		
		 		printf("\ntop = %d\n",top);
		 		top=top-1;
		 		printf("\ntop = %d\n",top);
				}
		
				break;
			case '4' :
				
				system("color a");
				system("cls");
			     ll_start();
				
				ll_peek(head,&top);
				break;
			case '5' :
				
				break;
			case '6' :
				
				break;
			case '7' :
				system("color 3");
				system("cls");
				break;
			default : 
			system("cls");
			ll_start();
			system("color 4");
			printf("\nChoose Among 1,2,3,4,5,6,7.\n");
		}//switch

   }while(c!='7');
}


bn* createnode()
{
	bn * temp;
	temp = (bn*) malloc(sizeof(bn));
	fflush(stdin);
		  printf("\nEnter Book Name : ");
		  gets(temp->bt); 
		  
		  fflush(stdin);
		  printf("Enter Author Name : ");
		  gets(temp->ba); 
		  
		  do
		  {
		  temp->bid = rand() % 100000;
		  }while((temp->bid)<=0);
	temp->next=NULL;
	
	return temp;
}//node creation
void ll_push(bn **head,int *top,int size)
{ bn* nn;
	if(overflow(*top,size)==1)
	{
		system("cls");
    ll_start();
	printf("\nOVERFLOW.\nNO MORE DATA CAN BE PUSHED INTO THE STACK\n");
	system("color 4");
	}
	
	else if(underflow(*top)==1)
	{   *top = *top+1;
		*head=createnode();
		nn=*head;
		
		printf("\nNEW BOOK DATA PUSHED INTO THE STACK");
		printf("\n\nPUSHED BOOK DATA : ");
		printf("\nBOOK ID     : %d",nn->bid);
		printf("\nBOOK NAME   : %s",nn->bt);
 		printf("\nAUTHOR NAME : %s\n",nn->ba);
	}
	
	else
	{	  printf("\ntop = %d\n",*top);
			//*top++   //not working
			//++*top; //working
			*top+=1; //working
			
			printf("top = %d\n",*top);
			 nn=createnode();
			 nn->next=*head;
			 *head = nn;
		  
		  system("color a");
		system("cls");
		 ll_start();	
		
		printf("\nNEW BOOK DATA PUSHED INTO THE STACK");
		printf("\n\nPUSHED BOOK DATA : ");
		printf("\nBOOK ID     : %d",nn->bid);
		printf("\nBOOK NAME   : %s",nn->bt);
 		printf("\nAUTHOR NAME : %s\n",nn->ba);
	    
		
	}
}
void ll_pop(bn **head,int *top)
{
	if(underflow(*top)==1)
	{
	system("cls");
     ll_start();
	printf("\nUNDERFLOW.\nNO DATA CAN BE POPPED FROM THE STACK\n");
	system("color 4");
	
	}
	else
	{
		temp=*head;
		*head=temp->next;
	}
}

void ll_peek(bn *head,int *top)
{
if(underflow(*top)==1)
	{
	system("cls");
     ll_start();
	printf("\nUNDERFLOW.\nNO DATA TO FROM THE STACK\n");
	system("color 4");
	}else
	{
		printf("\nBOOK DATA ON TOP OF STACK");
		printf("\nBOOK ID     : %d",head->bid);
		printf("\nBOOK NAME   : %s",head->bt);
 		printf("\nAUTHOR NAME : %s\n",head->ba);
	}	
}
