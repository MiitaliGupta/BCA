//Insertion

cl* createnode();

void insert() 
{
   cl *w = (cl*) malloc(sizeof(cl));
   cl *current;
   cl *parent;

   w = createnode();

   
   if(root == NULL) //if tree is empty
   {
      root = w;
      printf("\n\nDATA INSERTED.");
      printf("\nSTUDENT NAME : %s ",w->n);
      printf("\nRANK         : %d \n",w->r);
   } 
   
   else 
   {
      current = root;
      parent = NULL;

      while(1) 
	  { 
         parent = current;
         
         
         if(w->r < parent->r) //go to left of the tree
		 {
            current = current->lc;                
            
            
            if(current == NULL) //insert to the left
			{
               parent->lc = w;
                  printf("\n\nDATA INSERTED.");
			      printf("\nSTUDENT NAME : %s ",w->n);
			      printf("\nRANK         : %d \n",w->r);
               return;
            }
         }//left tree if  
         else                    //go to right of the tree
		  {
            current = current->rc;

           
            if(current == NULL)  //insert to the right
			{
               parent->rc = w;
               	  printf("\n\nDATA INSERTED.");
			      printf("\nSTUDENT NAME : %s ",w->n);
			      printf("\nRANK         : %d \n",w->r);
               return;
            }
         }//right tree else
      } //while           
   }//else
  
}//Insertion

cl* createnode()
{
	int x;
	cl *t = (cl*) malloc(sizeof(cl));
	fflush(stdin);
		  printf("\nEnter Student Name : ");
		  gets(t->n); 
		  
		  printf("\nDo you want to add the rank Manually or Randomly\nPress 1 for Mannual Input\nPress 2 for Random Input");
		  printf("\nYour Choice : ");
		  scanf("%d",&x);
		  if(x==1)
		  {
		  	printf("\nEnter Student Rank : ");
		  	scanf("%d",&t->r);
		  }
		  else if(x==2)
		  {
			  do
			  {
			  t->r = rand() % 100;
			  }while((t->r)<=0);
		  }
		  else
		  {
		  printf("\nINVALID INPUT\nRANDOM INPUT HAS BEEN DONE");
		   do
			  {
			  t->r = rand() % 100;
			  }while((t->r)<=0);
		  }
		  
	t->lc = NULL;
   t->rc = NULL;

	
	return t;
}//node creation
