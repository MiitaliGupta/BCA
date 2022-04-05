/*LAB--6
Nested FOR loop
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{   int f=1;
	printf("LAB 6\n\n");
	while(f==1)
	{
	int n,x;
 printf("\nThe following computation for Sorting an Array displays the usage of NESTED FOR LOOP\n\n");
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
    
    for(i=0;i<n;i++)
    { 
        for(j=0;j<(n-1);j++)
       {//comparing the adjacent elements
            if (a[j] > a[j+1])
            {
                //swapping
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                
	        }//if
        }//j loop
    }//i loop
    printf("Sorted Series : ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
	
printf("\n\nDo you want to do it again?\nThen press 1 \nOtherwise press 0\n");
printf("Your choice ");
scanf("%d",&f);
printf("\n\n");

}//while f		
printf("\n\nLAB 6 Task Completed");	
}//main


