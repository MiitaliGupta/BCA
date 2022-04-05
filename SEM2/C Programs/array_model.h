//ARRAY MODEL

//#include "stackvar.h"

void arrstart()
{
	printf("\n");
	printf("\t\t\t\t\t ARRAY MODEL LIBRARY DATABASE\n");
	printf("________________________________________________________________________________________________________________________\n");	
}//start

void array_model()
{
  char c;
  int i;
  s = (bk *)malloc(sizeof(bk));
system("color 3");
	system("cls");
	arrstart();


   do
   {
   	
	printf("\nMENU");
	printf("\n1.To Set Limit of No. of Books");
	printf("\n2.To Push Data into Library Database");
	printf("\n3.To Pop Data from Library Database");
	printf("\n4.To Peek Data from Library Database");
	printf("\n5.To Pop and Reverse the Data");
	printf("\n6.To Reverse the stack and Work with LINKED LIST MODEL");
	printf("\n7.To Exit");
	printf("\nYour Choice : ");
	fflush(stdin);
	c = getchar();
	
		switch(c)
		{
			case '1' :
				dot1 :
				printf("\n\nEnter No. of Books in the Database : ");
				scanf("%d",&size);
				if(size<=0)
				{
					system("color 4");
					printf("\nInvalid Input!!\nNumber of Books should be greater than Zero.");
					goto dot1;
				}//if
				
				system("color a");
				system("cls");
			    arrstart();
			    
				 s = (bk *)malloc(size*sizeof(bk));
				 printf("DATABASE LIMIT SET TO %d\n",size);
				
				break;
			case '2' :
				arrpush();
				/*for(i=0;i<=top;i++)
				{
				printf("\nBOOK ID     : %d",s[i].bid);
				printf("\nBOOK NAME   : %s",s[i].bt);
		 		printf("\nAUTHOR NAME : %s\n",s[i].ba);
				}*/
				
				break;
			case '3' :
				arrpop();
				
				if(top!=-1)
				{
					
				system("color a");
				system("cls");
			    arrstart();
					
				printf("\nBOOK DATA POPPED FROM STACK");
				printf("\n\nPOPPED STUDENT DATA : ");
				printf("\nBOOK ID     : %d",t.bid);
				printf("\nBOOK NAME   : %s",t.bt);
		 		printf("\nAUTHOR NAME : %s\n",t.ba);
		 		
				printf("\ntop = %d\n",top);
		 		top=top-1;
		 		printf("top = %d\n",top);
				}
		
				break;
			case '4' :
				system("color a");
				system("cls");
			    arrstart();
				
				arrpeek();
				break;
			case '5' :
				rev();
				break;
			case '6' :
				arrstackrev();
				break;
			case '7' :
				system("color 3");
				system("cls");
			    start();
				break;
			default : 
			system("cls");
			arrstart();
			system("color 4");
			printf("\nChoose Among 1,2,3,4,5,6,7.\n");
		}//switch

   }while(c!='7');
}

void arrpush()
{   
	if(overflow()==1)
	{
	system("cls");
    arrstart();
	printf("\nOVERFLOW.\nNO MORE DATA CAN BE PUSHED INTO THE STACK\n");
	system("color 4");
	
	}
	else
	{	  printf("\ntop = %d\n",top);
			//*top++   //not working
			//++*top; //working
			top+=1; //working
			
			printf("top = %d\n",top);
	
		  printf("\n\nEnter Details of New BOOK \n");
		  fflush(stdin);
		  printf("\nEnter Book Name : ");
		  gets(s[top].bt); 
		  
		  fflush(stdin);
		  printf("Enter Author Name : ");
		  gets(s[top].ba); 
		  
		  do
		  {
		  s[top].bid = rand() % 100000;
		  }while((s[top].bid)<=0);
	
	
		system("color a");
		system("cls");
		arrstart();	
		
		printf("\nNEW BOOK DATA PUSHED INTO THE STACK");
		printf("\n\nPUSHED BOOK DATA : ");
		printf("\nBOOK ID     : %d",s[top].bid);
		printf("\nBOOK NAME   : %s",s[top].bt);
 		printf("\nAUTHOR NAME : %s\n",s[top].ba);
	    
		
	}

}

void arrpop()
{	
	if(underflow()==1)
	{
	system("cls");
    arrstart();
	printf("\nUNDERFLOW.\nNO DATA CAN BE POPPED FROM THE STACK\n");
	system("color 4");
	
	}
	else
	{
		t.bid = s[top].bid;
		strcpy(t.bt,s[top].bt);
		strcpy(t.ba,s[top].ba);
	
	}
}

void arrpeek()
{	
	if(underflow()==1)
	{
	system("cls");
    arrstart();
	printf("\nUNDERFLOW.\nNO DATA TO FROM THE STACK\n");
	system("color 4");
	}
	else
	{
		printf("\nBOOK DATA ON TOP OF STACK");
		printf("\nBOOK ID     : %d",s[top].bid);
		printf("\nBOOK NAME   : %s",s[top].bt);
		printf("\nAUTHOR NAME : %s\n",s[top].ba);
	
	}
}

void rev()
{
	system("color a");
		system("cls");
		arrstart();	
		
	arrpop();
	if(top!=-1)
	{
	top -=1;
	char x[S],c;
	int i,len,n=0;
	
	printf("\nBOOK DATA POPPED FROM STACK");
	printf("\n\nORIGINAL POPPED BOOK DATA : ");
	printf("\nBOOK ID     : %d",t.bid);
	printf("\nBOOK NAME   : %s",t.bt);
	printf("\nAUTHOR NAME : %s\n",t.ba);
	
		printf("\n\nREVERSED BOOK DATA : ");
		while(t.bid>0)
		{
			len=t.bid%10;
			n = n*10 + len;
			t.bid = t.bid/10;
		}
		printf("\nREVERSED BOOK ID     : %d",n);
				len = strlen(t.bt);
			    for(i=0;i<len;i++)
			    { 
			    	x[i]= t.bt[i];	
				}
				printf("\nREVERSED BOOK NAME : ");
				for(i=len-1;i>=0;i--)
			    printf("%c",x[i]);
				
				len = strlen(t.ba);
			    for(i=0;i<len;i++)
			    { 
			    	x[i]= t.ba[i];	
				}
				printf("\nREVERSED BOOK AUTHOR : ");
				for(i=len-1;i>=0;i--)
			    printf("%c",x[i]);
				printf("\n");
				printf("\n");
				
	}
			
}

void arrstackrev()
{  	
   int x=top;
	arrpop();
	if(x!=-1)
	{  
	head =(bn*)malloc(sizeof(bn));
	    x=x-1;
		head->bid = t.bid;
		strcpy(head->bt,t.bt);
		strcpy(head->ba,t.ba);
		head->next = NULL;
		
		
		while(x!=-1)
		{	arrpop();
		nn =(bn*)malloc(sizeof(bn));
		
			nn->bid = t.bid;
			strcpy(nn->bt,t.bt);
			strcpy(nn->ba,t.ba);
			nn->next = head;
			head = nn;
			
			x-=1;
		}
		
		printf("\n\nSTACK REVERSED!!\nPRESS ANY KEY TO CONTINUE.");
		//getch() ;
		linklist_model();
		
	}
}

