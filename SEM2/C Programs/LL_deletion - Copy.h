//This files contains link List Insertion


void deletenode(stn *head,int *n)
{
system("cls");
start();
system("color 3");
char c,ch,temp[S];	
int x,p,y,flag;
stn *i,*j,*k,*t;
do
   {
	printf("\nMENU");
	printf("\n1.To Delete Data From the Beginning");
	printf("\n2.To Delete Data From the End");
	printf("\n3.To Delete Data From any Random Position");
	printf("\n4.To Delete Data After any Particular Element");
	printf("\n5.To Delete Data Before any Particular Element");
	printf("\n6.To Delete any Particular Element");
	printf("\n7.To Display Data in the Database");
	printf("\n8.To Exit");
	printf("\nYour Choice : ");
	fflush(stdin);
	c = getchar();
		 
			switch(c)
			{	case '1' : //To Delete Data From the Beginning
					  printf("\nEnter No. of Nodes you want to Delete : ");
					  scanf("%d",&x);
					  system("cls");
					  start();
					  if(x>0)
					  {
			  				*n=*n-x;
			              for(p=1;p<=x;p++)
			              {
							j = head;
							head = head->next;
							free(j);
					      }
							
							
							printf("\nDeleted Data From the List.Display Data to View the Changes.\n");
					}
					else
						printf("\nNo. of Nodes should be Greater than Zero");
				break;
				case '2' : //To Delete Data From the End
					printf("\nEnter No. of Nodes you want to Delete : ");
					scanf("%d",&x);
					system("cls");
					  start();
					if(x>0)
					{
						*n=*n-x;
						for(p=1;p<=x;p++)
			            {
						for(i=head;i!=NULL;i=i->next)
						{	j=i;
							t=j->next;
						   if(t->next==NULL)
						   break;
						}
						j->next = t->next;
						free(t);
						}
						
						printf("\nDeleted Data From the List.Display Data to View the Changes.\n");
					}
					else
						printf("\nNo. of Nodes should be Greater than Zero");
				break;
				case '3' : //To Delete Data From any Random Position
					printf("Enter No. of Nodes you want to Delete : ");
					scanf("%d",&x);
					system("cls");
					  start();
					if(x>0)
					{
						printf("\nEnter the Position where you want to Delete the New Data : ");
						scanf("%d",&p);
						if(p==1)
							printf("\nTo Delete Data From the Beginning Please choose Option 1 from the Menu.\n");
						else if(p>*n||p<=0)//
							printf("\nPosition Entered is Invalid.Therefore, Data Cant be Deleted From this Position.\n");
						else
						{ 
						*n=*n-x;
						
							i=head;
							for(y=1;y<p;y++)
							{   j=i;
						    	i=i->next;
						    }
							
							for(p=1;p<=x;p++)
				            {
								t=i;
								i=i->next;
							}
							
							j->next = t->next;
							free(t);
							printf("\nDeleted Data From the List.Display Data to View the Changes.\n");
						}//else
					}
					else
						printf("\nNo. of Nodes should be Greater than Zero");
				break;
				case '4' ://To Delete Data After any Particular Element
					system("cls");
					start();
					system("color 3");
					
						do
						{
							printf("\nMENU");
							printf("\n1.To Delete Data After any Particular Name");
							printf("\n2.To Delete New Data After a Particular Roll No.");
							printf("\n3.To Display Data in the Database");
							printf("\n4.To Exit");
							printf("\nYour Choice : ");
							fflush(stdin);
							ch = getchar();	
							
								switch(ch)
								{
									 case '1' ://To Delete Data After any Particular Element
									 	printf("\nEnter No. of Nodes you want to Delete : ");
										scanf("%d",&x);
										system("cls");
					 					 start();
										if(x>0)
										{
											*n=*n-x;
									 	fflush(stdin);
									 	printf("\nEnter the Name After which Data is to be Deleted : ");
									 	gets(temp);
									 	
									 	for(i=head;i!=NULL;i=i->next)
										 j=i;
									 	
									 	if(stricmp(temp,j->n)==0)
									 	printf("\nNo Data Present After the %s\n",temp);
									 	else
									 	{
									 	flag=0;
									 	for(i=head;i!=NULL;i=i->next)
										{  j=i;
										   if(stricmp(temp,i->n)==0)
										   {flag=1;
										   	break;
										   }
										}
										if(flag==1)
										{
										
										for(p=1;p<=x;p++)
							            {
							            	i=i->next;
											t=i;	
										}
										
										j->next = t->next;
										free(t); 
										
										printf("\nDeleted Data From the List.Display Data to View the Changes.\n");
										}//flag if
										else
										printf("\n\nName Not Found.\n");
										}
										}//if x>0
										else
										printf("\nNo. of Nodes should be Greater than Zero\n");
									 break;
									 case '2' ://To Delete New Data After a Particular Roll No.
									 	printf("\nEnter No. of Nodes you want to Delete : ");
										scanf("%d",&x);
										system("cls");
					 					 start();
										if(x>0)
										{
										
											*n=*n-x;
										printf("\nEnter the Roll no. After which Data is to be Deleted : ");
									 	scanf("%d",&p);
									 	for(i=head;i!=NULL;i=i->next)
										 j=i;
									 	
									 	if(j->r==p)
									 	printf("\nNo Data Present After the %d\n",p);
									 	else
									 	{
									 	flag=0;
									 	for(i=head;i!=NULL;i=i->next)
										{	j=i;
										   if(i->r==p)
										   {flag=1;
										   	break;
										   }
										}
										if(flag==1)
										{
										for(p=1;p<=x;p++)
							            {
							            	i=i->next;
											t=i;	
										}
										
										j->next = t->next;
										free(t);
										
										printf("\nDeleted Data From the List.Display Data to View the Changes.\n");
										}//flag if
										else
										printf("\n\nRoll No. Not Found.\n");
										}
										}//if x>0
										else
										printf("\nNo. of Nodes should be Greater than Zero\n");
									 break;
									 case '3' :
									 	display(head);
									 	break;
									 
									 case '4' :
									 	system("color 3");
										system("cls");
										start();
									 break;
									 default :
										system("cls");
										start();
										system("color 4");
										printf("\nChoose Among 1,2,3.\n");		
								}//switch ch
							
						}while(ch!='4');
				
				break;
				case '5' ://To Delete Data Before any Particular Element
					system("cls");
					start();
					system("color 3");
				
						do
						{
							printf("\nMENU");
							printf("\n1.To Delete New Data Before a Particular Name");
							printf("\n2.To Delete New Data Before a Particular Roll No.");
							printf("\n3.To Display Data in the Database");
							printf("\n4.To Exit");
							printf("\nYour Choice : ");
							fflush(stdin);
							ch = getchar();
								
									switch(ch)
								{
									 case '1' ://To Delete New Data Before a Particular Name
									 	system("cls");
					 					 start();
										printf("Enter No. of Nodes you want to Delete : ");
										scanf("%d",&x);
										if(x>0)
										{
											*n=*n-x;
									 	fflush(stdin);
									 	printf("Enter the Name Before which Data is to be Deleted : ");
									 	gets(temp);
									 	if(strcmp(head->n,temp)==0)
									 	printf("\nNo Data Present Before the %s\n",temp);
									 	else
									 	{
									 	flag = 0;
									 	for(y=1;y<=x;y++)
				           				 {
										 	for(i=head;i!=NULL;i=i->next)
											{	
												j=i;
												t=j->next;
												k=t->next;
											   		if(strcmp(k->n,temp)==0)
													   {
													   		j->next = t->next;
															free(t);
															flag=1;
															break;
													   }
											}
										}
									
										if(flag==1)
										printf("\nDeleted Data From the List.Display Data to View the Changes.\n");
										else
										printf("\nName Not Found.");
										}
										}//if x>0
										else
										printf("\nNo. of Nodes should be Greater than Zero");
									 break;
									 case '2' ://To Delete New Data Before a Particular Roll No.
										 system("cls");
					 					 start();
									 	printf("Enter No. of Nodes you want to Delete : ");
										scanf("%d",&x);
										if(x>0)
										{
											*n=*n-x;
									   	printf("Enter the Roll no. Before which Data is to be Deleted : ");
									 	scanf("%d",&p);
									 	if(head->r==p)
									 	printf("\nNo Data Present Before the %d\n",p);
									 	else
									 	{
									 	flag=0;
									 	for(y=1;y<=x;y++)
				           				 {
										 	for(i=head;i!=NULL;i=i->next)
											{	
												j=i;
												t=j->next;
												k=t->next;
											   		if(k->r==p)
													   {
													   		j->next = t->next;
															free(t);
															flag=1;
															break;
													   }
											}
										}
										if(flag==1)
										printf("\nDeleted Data From the List.Display Data to View the Changes.\n");
										else
										printf("\nRoll No. Not Found.");
										}
										}//if x>0
										else
										printf("\nNo. of Nodes should be Greater than Zero");	
									 break;
									 case '3' :
									 	display(head);
									 	break;
									 
									 case '4' :
									 	system("color 3");
										system("cls");
										start();
									 break;
									 default :
										system("cls");
										start();
										system("color 4");
										printf("\nChoose Among 1,2,3.\n");		
								}//switch ch
							
						}while(ch!='4');
						
				break;
				case '6' ://To Delete any Particular Element
					system("cls");
					start();
					system("color 3");
				
						do
						{
							printf("\nMENU");
							printf("\n1.To Delete a Particular Name");
							printf("\n2.To Delete  Roll No.");
							printf("\n3.To Display Data in the Database");
							printf("\n4.To Exit");
							printf("\nYour Choice : ");
							fflush(stdin);
							ch = getchar();
								
									switch(ch)
								{
									 case '1' ://To Delete a Particular Name
										system("cls");
					 					 start();
									 	fflush(stdin);
									 	printf("Enter the Name which is to be Deleted : ");
									 	gets(temp);
									 	if(strcmp(head->n,temp)==0)
										printf("\nTo Delete Data From the Beginning Please choose Option 1 from Pervious the Menu.");
										else
										{
									 	flag = 0;
									 	
										 	for(i=head;i!=NULL;i=i->next)
											{	
												j=i;
												t=j->next;
												k=t->next;
											   		if(strcmp(t->n,temp)==0)
													   {
													   		j->next = t->next;
															free(t);
															flag=1;
															break;
													   }
											}
										
									
										if(flag==1)
										printf("\nDeleted Data From the List.Display Data to View the Changes.\n");
										else
										printf("\nName Not Found.");
										}
										
									 break;
									 case '2' ://To Delete  Roll No.
									 	system("cls");
					 					 start();
									   	printf("Enter the Roll no. Before which Data is to be Deleted : ");
									 	scanf("%d",&p);
									 	if(head->r==p)
									 	printf("\nTo Delete Data From the Beginning Please choose Option 1 from Pervious the Menu.");
										else
										{
									 	flag=0;
										 	for(i=head;i!=NULL;i=i->next)
											{	
												j=i;
												t=j->next;
												k=t->next;
											   		if(t->r==p)
													   {
													   		j->next = t->next;
															free(t);
															flag=1;
															break;
													   }
											}
										
										if(flag==1)
										printf("\nDeleted Data From the List.Display Data to View the Changes.\n");
										else
										printf("\nRoll No. Not Found.");
										}
									 break;
									 case '3' :
									 	display(head);
									 	break;
									 
									 case '4' :
									 	system("color 3");
										system("cls");
										start();
									 break;
									 default :
										system("cls");
										start();
										system("color 4");
										printf("\nChoose Among 1,2,3.\n");		
								}//switch ch
							
						}while(ch!='4');
						
				break;
				case '7' :
					display(head);
				break;
				case '8' :
					system("color 3");
					system("cls");
					start();
				break;
			default : 
				system("cls");
				start();
				system("color 4");
				printf("\nChoose Among 1,2,3,4,5,6,7,8.\n");	
			}//switch c
	
   }while(c!='8');
}//insertion
