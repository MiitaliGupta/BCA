//Traversal


void pre(cl *root) 
{
   if(root != NULL) 
   {f++;
   	  printf("\nSTUDENT NAME : %s ",root->n);
      printf("\nRANK         : %d \n",root->r);
      pre(root->lc);
      pre(root->rc);
   }
   if(f==0)
   printf("\nTREE IS EMPTY\n");
}

void in(cl *root) 
 {
   if(root != NULL)
    {f++;
      in(root->lc);
      printf("\nSTUDENT NAME : %s ",root->n);
      printf("\nRANK         : %d \n",root->r);    
      in(root->rc);
   }
   if(f==0)
   printf("\nTREE IS EMPTY\n");
}

void post(cl *root)  
{
   if(root != NULL) 
   { f++;
      post(root->lc);
      post(root->rc);
      printf("\nSTUDENT NAME : %s ",root->n);
      printf("\nRANK         : %d \n",root->r);
   }
   if(f==0)
   printf("\nTREE IS EMPTY\n");
}

void traverse()
{
char c;

//system("cls");
system("color 3");
start();
   do
   {
  
	printf("\n\nTRAVERSAL MENU\n");
 	printf("\n1. Preorder Traversal.");
    printf("\n2. Inorder Traversal.");
    printf("\n3. Postorder Traversal.");
    printf("\n4. Exit.");
	printf("\nYour Choice : ");
	fflush(stdin);
	c = getchar();
	
		switch(c)
		{
			case '1' :
				f=0;
				pre(root) ;
				break;
			case '2' :
				f=0;
				in(root) ;
				break;
			case '3' :
				f=0;
				post(root) ;
				break;
			case '4' :
		//	system("cls");
			start();
			system("color 3");
				break;
			default : 
		//	system("cls");
			start();
			system("color 4");
			printf("\nChoose Among 1,2,3,4.\n");
		}//switch

  		 }while(c!='4');
   	
}

