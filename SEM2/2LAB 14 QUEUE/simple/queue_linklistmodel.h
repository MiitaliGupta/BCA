//LINKLIST MODEL

void llstart()
{
	printf("\n");
	printf("\t\t\t\t\t LINKED LIST MODEL RESTAURANT RESERVATION SYSTEM\n");
	printf("________________________________________________________________________________________________________________________\n");	
}//start

void linklist_model(int *front,int *rear,int *size)
{
  char c;
  int i,x; 
  res *head = (res*)malloc(sizeof(res));
  
system("color 3");
system("cls");
llstart();
//ll_printq(head,*front,*rear);

   do
   {
   	
	printf("\nMENU");
	printf("\n1.To Set Limit of No. of Customers");
	printf("\n2.To Enqueue");
	printf("\n3.To Dequeue");
	printf("\n4.To Check first Customer in the Queue");
	printf("\n5.To Check last Customer in the Queue");
	printf("\n6.To Check if Queue is Empty");
	printf("\n7.To Check if Queue is Full");
	//printf("\n8.To Reverse the Queue and Work with LINKED LIST MODEL");
	printf("\n9.To Exit");
	printf("\nYour Choice : ");
	fflush(stdin);
	c = getchar();
	
		switch(c)
		{
			case '1' :
				dot1 :
				printf("\n\nEnter Maximum No. of Customers that can be in Queue : ");
				scanf("%d",&x);
				if(x<=0)
				{
					system("color 4");
					printf("\nInvalid Input!!\nNumber of Books should be greater than Zero.");
					goto dot1;
				}//if
				*size=x;
				system("color a");
				system("cls");
			    llstart();
			    
				printf("QUEUE LIMIT SET TO %d\n",*size);
				
				break;
			case '2' :
				ll_enqueue(&head,rear,front,*size);
				ll_printq(head,*front,*rear);
				break;
			case '3' :
				ll_dequeue(&head,rear,front,*size);
				
				if(*front<=*rear)
				{
					
				system("color a");
				system("cls");
			    llstart();
					
				printf("\nCUSTOMER DATA DEQUEUED FROM QUEUE : \n");
				printf("\nCUSTOMER NAME      : %s",t->name);
				printf("\nCONTACT NUMBER     : %ld",t->num);
				printf("\nTABLE NO.          : %d\n",t->tnum);
				
				ll_printq(head,*front,*rear);
		 		
				}
				
				break;
			case '4' :
				system("color a");
				system("cls");
			    llstart();
				ll_front(head,*rear,*front);
				
				break;
			case '5' :
				system("color a");
				system("cls");
			    llstart();
				ll_rear(head,*rear,*front);
				
				break;
			case '6' :
				system("color 3");
				if(isempty(*front,*rear)==1)
				{
				system("cls");
			    llstart();
				printf("\nQUEUE IS EMPTY.\n");
				}
				else
				{
				system("cls");
			    llstart();
				printf("\nQUEUE IS NOT EMPTY.\nCUSTOMERS ARE WAITING FOR THE TABLES\n");	
				}
				break;
			case '7' :
				system("color 3");
				if(isfull(*front,*rear,*size)==1)
				{
				if(*front != -1)
				{
				system("cls");
			    llstart();
				printf("\nREACHED END OF QUEUE.\n");
				}	
				else
				{
				system("cls");
			    llstart();
				printf("\nQUEUE IS FULL OF CUSTOMERS.\n");
				}
				}
				else
				{
				system("cls");
			    llstart();
				printf("\nQUEUE IS NOT FULL.\nBUT STILL THERE MIGHT BE SOME CUSTOMER IN QUEUE WAITING FOR THE TABLES\n");	
				}
				break;
			case '8' :
//				system("color 3");
//				system("cls");
//			    start();
				break;
			case '9' :
				system("color 3");
				system("cls");
			    start();
				break;
			default : 
			system("cls");
			llstart();
			system("color 4");
			printf("\nChoose Among 1,2,3,4,5,6,7,8,9.\n");
		}//switch

   }while(c!='9');
}


void createnode()
{
	
	t = (res*) malloc(sizeof(res));
	fflush(stdin);
		  printf("\n\nEnter Details of New Customer \n");
		  fflush(stdin);
		  printf("\nEnter Customer Name : ");
		  gets(t->name); 
		  
		  t->num = rand() % (9999999999+1-9111111111)+9111111111;
		  
		  t->next=NULL;
	
}//node creation

void ll_enqueue(res **head,int *rear,int *front,int size)
{	
	res *j,*k;
	if(isfull(*front,*rear,size)==1)
	{
	system("cls");
    arrstart();
	printf("\nQUEUE IS FULL.\nNO MORE CUSTOMERS CAN ENTER THE QUEUE\n");
	system("color 4");
	}
	else if(isempty(*front,*rear)==1)
	{
		*rear+=1;
		createnode();
		*head = t;
		
		system("color a");
		system("cls");
		llstart();
		
		printf("\nNEW CUSTOMER DATA ENQUEUED INTO THE QUEUE\n");
		printf("\nCUSTOMER NAME      : %s",t->name);
		printf("\nCONTACT NUMBER     : %ld\n",t->num);
		
	}
	else
	{	 
		*rear+=1; 
		createnode();
		
		for(j=*head;j!=NULL;j=j->next)
		k=j;
		
		
		k->next = t;
		  
		system("color a");
		system("cls");
		llstart();	
		
		printf("\nNEW CUSTOMER DATA ENQUEUED INTO THE QUEUE\n");
		printf("\nCUSTOMER NAME      : %s",t->name);
		printf("\nCONTACT NUMBER     : %ld\n",t->num);
		
	}
	
}
void ll_dequeue(res **head,int *rear,int *front,int size)
{
if(isempty(*front,*rear)==1)
	{
	*front+=1;
	system("cls");
    arrstart();
	printf("\nQUEUE IS EMPTY.\nNO CUSTOMER IN QUEUE TO ASSIGN TABLE\n");
	system("color 4");
	
	}
	else
	{	
		*front+=1;
		t= *head;
		*head = t->next;
		do
		  {
		  t->tnum = rand() % size;
		  }while(t->tnum<=0);
	}	
}

void ll_front(res *head,int rear,int front)
{
if(isempty(front,rear)==1)
	{
	system("cls");
    llstart();
	printf("\nQUEUE IS EMPTY.\n");
	system("color 4");
	}
	else
	{
		printf("\nFIRST CUSTOMER IN THE QUEUE\n");
		printf("\nCUSTOMER NAME      : %s",head->name);
		printf("\nCONTACT NUMBER     : %ld\n",head->num);		
			
	}	
}


void ll_rear(res *head,int rear,int front)
{
	res *j,*k;
	
	if(isempty(front,rear)==1)
	{
	system("cls");
    arrstart();
	printf("\nQUEUE IS EMPTY.\n");
	system("color 4");
	}
	else
	{
		for(j=head;j!=NULL;j=j->next)
		k=j;
		
		printf("\nLAST CUSTOMER IN THE QUEUE\n");
	 	printf("\nCUSTOMER NAME      : %s",k->name);
		printf("\nCONTACT NUMBER     : %ld\n",k->num);
				
	}
}
void ll_printq(res *head,int front,int rear)
{
	res *j;
	if(isempty(front,rear)==1)
	printf("\nQUEUE IS EMPTY.\nNO CUSTOMER IN QUEUE TO ASSIGN TABLE\n");
	else
	{
	printf("\n\nTHE QUEUE :\n");
	for(j=head;j!=NULL;j=j->next)
	 {
	 	printf("\nCUSTOMER NAME      : %s",j->name);
		printf("\nCONTACT NUMBER     : %ld\n",j->num);
			
	}
	}
}
