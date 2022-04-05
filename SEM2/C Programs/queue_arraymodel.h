//ARRAY MODEL

void arrstart()
{
	printf("\n");
	printf("\t\t\t\t\t ARRAY MODEL RESTAURANT RESERVATION SYSTEM\n");
	printf("________________________________________________________________________________________________________________________\n");	
}//start

void array_model(int *front,int *rear,int *size)
{
  char c;
  int i,x,a,b; 
  res *s;
  
system("color 3");
system("cls");
arrstart();


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
	printf("\n8.To Display the Queue");
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
			    arrstart();
			    
				 s = (res*)malloc(*size*sizeof(res));
				 printf("QUEUE LIMIT SET TO %d\n",*size);
				
				break;
			case '2' :
				arr_enqueue(s,rear,front,*size);
				arr_printq(s,*front,*rear,*size);
				break;
			case '3' :
				a=front;
				b=rear;
				arr_dequeue(s,rear,front,*size);
				
				if(a!=-1 ||b!=-1)
				{
					
				system("color a");
				system("cls");
			    arrstart();
					
				printf("\nCUSTOMER DATA DEQUEUED FROM QUEUE : \n");
				printf("\nCUSTOMER NAME      : %s",temp.name);
				printf("\nCONTACT NUMBER     : %ld",temp.num);
				printf("\nTABLE NO.          : %d\n",temp.tnum);
				
				arr_printq(s,*front,*rear,*size);
		 		
				}
				
				break;
			case '4' :
				system("color a");
				system("cls");
			    arrstart();
				arr_front(s,*front,*rear);
				
				break;
			case '5' :
				system("color a");
				system("cls");
			    arrstart();
				arr_rear(s,*front,*rear);
				
				break;
			case '6' :
				system("color 3");
				if(isempty(*front,*rear)==1)
				{
				system("cls");
			    arrstart();
				printf("\nQUEUE IS EMPTY.\n");
				}
				else
				{
				system("cls");
			    arrstart();
				printf("\nQUEUE IS NOT EMPTY.\nCUSTOMERS ARE WAITING FOR THE TABLES\n");	
				}
				break;
			case '7' :
				system("color 3");
				if(isfull(*front,*rear,*size)==1)
				{
//				if(*front != 0)
//				{
//				system("cls");
//			    arrstart();
//				printf("\nREACHED END OF QUEUE.\n");
//				}	
//				else
//				{
				system("cls");
			    arrstart();
				printf("\nQUEUE IS FULL OF CUSTOMERS.\n");
				//}
				}
				else
				{
				system("cls");
			    arrstart();
				printf("\nQUEUE IS NOT FULL.\nBUT STILL THERE MIGHT BE SOME CUSTOMER IN QUEUE WAITING FOR THE TABLES\n");	
				}
				break;
			case '8' :
				system("color 3");
				system("cls");
			    arrstart();
			    arr_printq(s,*front,*rear,*size);
			   // arrqueuerev(s,rear,front,*size);
			    
				break;
			case '9' :
				system("color 3");
				system("cls");
			    start();
				break;
			default : 
			system("cls");
			arrstart();
			system("color 4");
			printf("\nChoose Among 1,2,3,4,5,6,7,8,9.\n");
		}//switch

   }while(c!='9');
}

void arr_enqueue(res *s,int *rear,int *front,int size)
{
	if(isfull(*front,*rear,size)==1)
	{
	system("cls");
    arrstart();
	printf("\nQUEUE IS FULL.\nNO MORE CUSTOMERS CAN ENTER THE QUEUE\n");
	system("color 4");
	}
	else if (*front == -1) /* Insert First Element */
	{
		*front = *rear = 0;
		printf("\n\nEnter Details of New Customer \n");
		  fflush(stdin);
		  printf("\nEnter Customer Name : ");
		  gets(s[*rear].name); 
		  
		  s[*rear].num = rand() % (9999999999+1-9111111111)+9111111111;//(max+1-min)+min
		  
		system("color a");
		system("cls");
		arrstart();	
		
		printf("\nNEW CUSTOMER DATA ENQUEUED INTO THE QUEUE\n");
		printf("\nCUSTOMER NAME      : %s",s[*rear].name);
		printf("\nCONTACT NUMBER     : %ld\n",s[*rear].num);
	}
	else if (*rear == size-1 && *front != 0)
    {
        rear = 0;
        printf("\n\nEnter Details of New Customer \n");
		  fflush(stdin);
		  printf("\nEnter Customer Name : ");
		  gets(s[*rear].name); 
		  
		  s[*rear].num = rand() % (9999999999+1-9111111111)+9111111111;//(max+1-min)+min
		  
		system("color a");
		system("cls");
		arrstart();	
		
		printf("\nNEW CUSTOMER DATA ENQUEUED INTO THE QUEUE\n");
		printf("\nCUSTOMER NAME      : %s",s[*rear].name);
		printf("\nCONTACT NUMBER     : %ld\n",s[*rear].num);
	}
	else
	{	  
			*rear+=1; 
			
		  printf("\n\nEnter Details of New Customer \n");
		  fflush(stdin);
		  printf("\nEnter Customer Name : ");
		  gets(s[*rear].name); 
		  
		  s[*rear].num = rand() % (9999999999+1-9111111111)+9111111111;//(max+1-min)+min
		  
		system("color a");
		system("cls");
		arrstart();	
		
		printf("\nNEW CUSTOMER DATA ENQUEUED INTO THE QUEUE\n");
		printf("\nCUSTOMER NAME      : %s",s[*rear].name);
		printf("\nCONTACT NUMBER     : %ld\n",s[*rear].num);
		
	}

}

void arr_dequeue(res *s,int *rear,int *front,int size)
{
	if(isempty(*front,*rear)==1)
	{
//	*front+=1;
	system("cls");
    arrstart();
	printf("\nQUEUE IS EMPTY.\nNO CUSTOMER IN QUEUE TO ASSIGN TABLE\n");
	system("color 4");
	
	}
	 if (*front == *rear)
    {
    	temp.num = s[*front].num;
		strcpy(temp.name,s[*front].name);
		do
		  {
		  temp.tnum = rand() % r;
		  }while(temp.tnum<=0);
		  
        *front = -1;
        *rear = -1;
    }
    else if (*front == size-1)
      {
      	temp.num = s[*front].num;
		strcpy(temp.name,s[*front].name);
		do
		  {
		  temp.tnum = rand() % r;
		  }while(temp.tnum<=0);
		  
		 *front = 0;
	}
	else
	{	
		temp.num = s[*front].num;
		strcpy(temp.name,s[*front].name);
		do
		  {
		  temp.tnum = rand() % r;
		  }while(temp.tnum<=0);
		  
		  *front+=1;
	}
}

void arr_front(res *s,int front,int rear)
{
if(isempty(front,rear)==1)
	{
	system("cls");
    arrstart();
	printf("\nQUEUE IS EMPTY.\n");
	system("color 4");
	}
	else
	{
		printf("\nFIRST CUSTOMER IN THE QUEUE\n");
		printf("\nCUSTOMER NAME      : %s",s[front].name);
		printf("\nCONTACT NUMBER     : %ld\n",s[front].num);		
			
	}	
}

void arr_rear(res *s,int front,int rear)
{
if(isempty(front,rear)==1)
	{
	system("cls");
    arrstart();
	printf("\nQUEUE IS EMPTY.\n");
	system("color 4");
	}
	else
	{
		printf("\nLAST CUSTOMER IN THE QUEUE\n");
		printf("\nCUSTOMER NAME      : %s",s[rear].name);
		printf("\nCONTACT NUMBER     : %ld\n",s[rear].num);		
			
	}	
}

/*void arrqueuerev(res *s,int *rear,int *front,int size)
{
	
res *j,*k;
int *x=front;
int *y=rear;
	arr_dequeue(s,rear,front,size);
	if(*front<=*rear)
	{  
	res *head =(res*)malloc(sizeof(res));
		head->num = temp.num;
		strcpy(head->name,temp.name);
		head->next = NULL;
		
	ll_printq(head,*front,*rear);	
		while(*front<=*rear)
		{	
		arr_dequeue(s,rear,front,size);
		t =(res*)malloc(sizeof(res));
		
			t->num = temp.num;
			strcpy(t->name,temp.name);
			t->next = NULL;
			for(j=head;j!=NULL;j=j->next)
			k=j;
			
			
			k->next = t;
	
		}
		//ll_printq(head,*front,*rear);
	}
		
		printf("\n\nQUEUE REVERSED!!\nPRESS ANY KEY TO CONTINUE.");
		//getch() ;
		linklist_model(x,y,&size);	
}*/
void arr_printq(res *s,int front,int rear,int size)
{
	int i;
	if(isempty(front,rear)==1)
	printf("\nQUEUE IS EMPTY.\nNO CUSTOMER IN QUEUE TO ASSIGN TABLE\n");
	else if(rear >= front)
	{
	printf("\n\nTHE QUEUE :\n");
	for(i=front;i<=rear;i++)
	{
		printf("\nCUSTOMER NAME      : %s",s[i].name);
		printf("\nCONTACT NUMBER     : %ld\n",s[i].num);
	}
	}
	else
	{
		printf("\n\nTHE QUEUE :\n");
	for(i=front;i<=size;i++)
	{
		printf("\nCUSTOMER NAME      : %s",s[i].name);
		printf("\nCONTACT NUMBER     : %ld\n",s[i].num);
	}
	}
}

