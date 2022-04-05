//This files contains link List Insertion


void insert(stn *head,int *n)
{
system("cls");
start();
system("color 3");
char c,ch,temp[S];	
int x,p,flag;
stn *h,*i,*j,*k,*t;
do
   {
	printf("\nMENU");
	printf("\n1.To Insert New Data In the Beginning");
	printf("\n2.To Insert New Data In the End");
	printf("\n3.To Insert New Data at any Random Position");
	printf("\n4.To Insert New Data After any Particular Element");
	printf("\n5.To Insert New Data Before any Particular Element");
	printf("\n6.To Display Data in the Database");
	printf("\n7.To Exit");
	printf("\nYour Choice : ");
	fflush(stdin);
	c = getchar();
			switch(c)
			{	case '1' : //To Insert New Data In the Beginning
						system("cls");
					  start();
					  printf("\nEnter No. of Nodes you want to Insert : ");
					  scanf("%d",&x);
					  if(x>0)
					  {
						  printf("\n\nEnter Details of Student 1 :\n");
						  h=createnode();
						  input(h,&x);
						  
			  				*n=*n+x;
			  
							for(i=h;i!=NULL;i=i->next)
							j=i;
							j->next = head;
							head = h;
							
							printf("\nEntered Data Added to the List.Display Data to View the Changes.\n");
					}
					else
						printf("\nNo. of Nodes should be Greater than Zero");
				break;
				case '2' ://To Insert New Data In the End
					system("cls");
					  start();
					printf("Enter No. of Nodes you want to Insert : ");
					scanf("%d",&x);
					if(x>0)
					{
						printf("\n\nEnter Details of Student 1 :\n");
						h=createnode();
						input(h,&x);
						
						*n=*n+x;
						  
						for(i=head;i!=NULL;i=i->next)
						j=i;
						j->next = h;
						printf("\nEntered Data Added to the List.Display Data to View the Changes.\n");
					}
					else
						printf("\nNo. of Nodes should be Greater than Zero");
				break;
				case '3' ://To Insert New Data at any Random Position
					system("cls");
					start();
					printf("Enter No. of Nodes you want to Insert : ");
					scanf("%d",&x);
					if(x>0)
					{
						printf("\n\nEnter Details of Student 1 :\n");
						h=createnode();
						input(h,&x);
					
						printf("\nEnter the Position where you want to insert the New Data : ");
						scanf("%d",&p);
						if(p==1)
							printf("\nTo Insert Data At the Beginning Please choose Option 1 from the Menu.");
						else if(p>(*n+1)||p<=0)
							printf("\nPosition Entered is Invalid.Therefore, Data Cant be Entered At this Position.");
						else
						{ *n=*n+x;
							i=head;
							for(x=1;x<p;x++)
							{   j=i;
						    	i=i->next;
						    }
							
							for(i=h;i!=NULL;i=i->next)
							k=i;
							
							k->next = j->next;
							j->next = h;
							printf("\nEntered Data Added to the List.Display Data to View the Changes.\n");	
						}//else
					}
					else
						printf("\nNo. of Nodes should be Greater than Zero");
				break;
				case '4' ://To Insert New Data After any Particular Element
					system("cls");
					start();
					system("color 3");
					
						do
						{
							printf("\nMENU");
							printf("\n1.To Insert New Data After a Particular Name");
							printf("\n2.To Insert New Data After a Particular Roll No.");
							printf("\n3.To Display Data in the Database");
							printf("\n4.To Exit");
							printf("\nYour Choice : ");
							fflush(stdin);
							ch = getchar();	
							
								switch(ch)
								{
									 case '1' ://To Insert New Data After a Particular Name
									 	system("cls");
					 					 start();
									 	printf("Enter No. of Nodes you want to Insert : ");
										scanf("%d",&x);
										if(x>0)
										{
											printf("\n\nEnter Details of Student 1 :\n");
											h=createnode();
											input(h,&x);
											*n=*n+x;
									 	fflush(stdin);
									 	printf("Enter the Name After which Data is to be added : ");
									 	gets(temp);
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
										for(i=h;i!=NULL;i=i->next)
										k=i;
										
										k->next = j->next;
										j->next = h; 
										
										printf("\nEntered Data Added to the List.Display Data to View the Changes.\n");	
										}//flag if
										else
										printf("\nName Not Found.\n");
										}//if x>0
										else
										printf("\nNo. of Nodes should be Greater than Zero\n");
									 break;
									 case '2' ://To Insert New Data After a Particular Roll No.
									 	system("cls");
					 					 start();
									 	printf("Enter No. of Nodes you want to Insert : ");
										scanf("%d",&x);
										if(x>0)
										{
											printf("\n\nEnter Details of Student 1 :\n");
											h=createnode();
											input(h,&x);
											*n=*n+x;
										printf("Enter the Roll no. After which Data is to be added : ");
									 	scanf("%d",&p);
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
										for(i=h;i!=NULL;i=i->next)
										k=i;
										
										k->next = j->next;
										j->next = h; 
										
										printf("\nEntered Data Added to the List.Display Data to View the Changes.\n");
										}//flag if
										else
										printf("\nRoll No. Not Found.\n");	
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
										printf("\nChoose Among 1,2,3,4.\n");		
								}//switch ch
							
						}while(ch!='4');
				
				break;
				case '5' ://To Insert New Data Before any Particular Element
					system("cls");
					start();
					system("color 3");
				
						do
						{
							printf("\nMENU");
							printf("\n1.To Insert New Data Before a Particular Name");
							printf("\n2.To Insert New Data Before a Particular Roll No.");
							printf("\n3.To Display Data in the Database");
							printf("\n4.To Exit");
							printf("\nYour Choice : ");
							fflush(stdin);
							ch = getchar();
								
									switch(ch)
								{
									 case '1' ://To Insert New Data Before a Particular Name
									 	system("cls");
					 					 start();
										printf("Enter No. of Nodes you want to Insert : ");
										scanf("%d",&x);
										if(x>0)
										{
											printf("\n\nEnter Details of Student 1 :\n");
											h=createnode();
											input(h,&x);
											*n=*n+x;
									 	fflush(stdin);
									 	printf("Enter the Name Before which Data is to be added : ");
									 	gets(temp);
									 	flag=0;
									 	if(strcmp(head->n,temp)==0)
									 	{  flag=1;
									 		for(i=h;i!=NULL;i=i->next)
											j=i;
											j->next = head;
											head = h;
										printf("\nEntered Data Added to the List.Display Data to View the Changes.\n");				 		
										 }//if head node is same
										 else
										 {
									 	
									 	for(i=head;i!=NULL;i=i->next)
										{  j=i;
										   t=j->next;
										   if(strcmp(t->n,temp)==0)
										   {flag=1;
										   	break;
										   }
										}
										if(flag==1)
										{
										for(i=h;i!=NULL;i=i->next)
										k=i;
										
										k->next = j->next;
										j->next = h; 
										
										
										printf("\nEntered Data Added to the List.Display Data to View the Changes.\n");	
										}//flag if
										else
										printf("\nName Not Found.\n");
										}
										
										}//if x>0
										else
										printf("\nNo. of Nodes should be Greater than Zero\n");
									 break;
									 case '2' ://To Insert New Data Before a Particular Roll No.
									 	system("cls");
					 					 start();
									 	printf("Enter No. of Nodes you want to Insert : ");
										scanf("%d",&x);
										if(x>0)
										{
											printf("\n\nEnter Details of Student 1 :\n");
											h=createnode();
											input(h,&x);
											*n=*n+x;
									   	printf("Enter the Roll no. Before which Data is to be added : ");
									 	scanf("%d",&p);
									 	flag=0;
									 	if(head->r==p)
									 	{flag=1;
									 	for(i=h;i!=NULL;i=i->next)
											j=i;
											j->next = head;
											head = h;
											
											printf("\nEntered Data Added to the List.Display Data to View the Changes.\n");	
										 }//if roll no. is same as head
										 else
										 {
									 	for(i=head;i!=NULL;i=i->next)
										{	j=i;
											t=j->next;
										   if(t->r==p)
										   {flag=1;
										   	break;
										   }
										}
										if(flag==1)
										{
										for(i=h;i!=NULL;i=i->next)
										k=i;
										
										k->next = j->next;
										j->next = h; 
										
										printf("\nEntered Data Added to the List.Display Data to View the Changes.\n");
										}//flag if
										else
										printf("\nRoll No. Not Found.\n");
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
				case '6' :
					display(head);
				break;
				case '7' :
					system("color 3");
					system("cls");
					start();
				break;
			default : 
				system("cls");
				start();
				system("color 4");
				printf("\nChoose Among 1,2,3,4,5,6,7.\n");	
			}//switch c
	
   }while(c!='7');
}//insertion
