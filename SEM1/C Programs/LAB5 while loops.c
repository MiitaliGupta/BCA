/*LAB--5
Simple and Nested While loop
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{ int f=1,f1=1,id,ch,ca,sa,sh,ma,mh,da,dh;
float cp,sp,mp,dp,th,ta,tp;

printf("LAB 4\n\n");
	while(f==1)
	{
	
	printf("To see usage of while loop press a\n");
	printf("To see usage of nested while loop press b\n");
	printf("Your choice ");
	char ch;
	scanf("%c",&ch);
	switch(ch)
	{
		
	case 'a':
  {
		
		while(f1==1)
   {   
 printf("\nThe following computation for attendence percentage displays the usage of SINGLE WHILE LOOP\n\n");
 
 
printf("\nEnter Student's registration id : ");
scanf("%d",&id);

printf("Enter total hours of C THEORY class held : ");
scanf("%d",&ch);
printf("Enter total hours of C THEORY class attended by the student : ");
scanf("%d",&ca);
cp=(ca/(float)ch)*100;

printf("Enter total hours of DCf THEORY class held : ");
scanf("%d",&dh);
printf("Enter total hours of DCF THEORY class attended by the student : ");
scanf("%d",&da);
dp=(da/(float)dh)*100;

printf("Enter total hours of STATS class held : ");
scanf("%d",&sh);
printf("Enter total hours of STATS class attended by the student : ");
scanf("%d",&sa);
sp=(sa/(float)sh)*100;

printf("Enter total hours of MATHS class held : ");
scanf("%d",&mh);
printf("Enter total hours of MATHS class attended by the student : ");
scanf("%d",&ma);
mp=(ma/(float)mh)*100;

th=ch+sh+dh+mh;
ta=ca+sa+da+ma;
tp=(ta/(float)th)*100;


	printf("\n\n");
	printf("Student's registration id : %d",id);
	
		printf("\nC THEORY : %.2f%%",cp);
		printf("\nDCF THEORY : %.2f%%",dp);
		printf("\nSTATS : %.2f%%",sp);
		printf("\nMATHS : %.2f%%",mp);
		printf("\nTOTAL ATTENDENCE : %.2f%%",tp);

    printf("\n\nto check attendence of another students press 1\nOtherwise press 0\n");
    printf("Your choice : ");
	scanf("%d",&f1);
}//while f1
break;
}//switch case a


   case 'b':
   	{int n,x;
 printf("\nThe following computation for Sorting an Array displays the usage of NESTED WHILE LOOP\n\n");
 printf("How many numbers do you want to sort?\nEnter your choice : ");
 scanf("%d",&n);
   	int a[n] ;
   	printf("Enter all %d numbers below :\n",n);
   	for(x=0;x<n;x++)
    scanf("%d",&a[x]);
    
    printf("\nEntered Series : ");
    for(x=0;x<n;x++)
        printf("%d ",a[x]);
        printf("\n");
    int i=0,j=0;

    //repeating loop 7 (number of elements in the array) times
    while( j<n )
    {
        //initially swapped is false
        int swapped = 0;
        i = 0;
        while(i<n-1)
        {
            //comparing the adjacent elements
            if (a[i] > a[i+1])
            {
                //swapping
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                //Changing the value of swapped
                swapped = 1;
            }
            i++;
        }
        j++;
        //if swapped is false then the array is sorted
        //we can stop the loop
        if(!swapped)
            break;
    }
    printf("Sorted Series : ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    break;
    }//switch case b
   	defalut :
   	{printf(" Oh No...You Made A Wrong Choice!!");
   	break;
	}//default of ch switch
}//switch ch
printf("\n\nDo you want to choose again?\nThen press 1 \nOtherwise press 0\n");
printf("Your choice ");
scanf("%d",&f);
printf("\n\n");
fflush(stdin);
}//while f		
printf("\n\nLAB 5 Task Completed");	
}//main


