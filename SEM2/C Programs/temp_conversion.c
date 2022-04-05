// temperature conversion
#include<stdio.h>
#include<conio.h>
main()
{
	int a=0;
	float t=0.0,nt=0.0;
	printf("to convert temperature for F to C press 1 \n");
	printf("to convert temperature for C to F press 2 \n");
   	printf("enter your choice : ");
   	scanf("%d",&a);
   	switch(a)
{
	case 1 :
			printf("enter temperature in F ");
			scanf("%f",&t);
			nt = (t-32)/1.8;
			printf("temperature in C = %f \n", nt);
			break;
	case 2 :
			printf("enter temperature in C ");
			scanf("%f",&t);
			nt = (t*1.8)+32;
			printf("temperature in F = %f \n", nt);
			break;
    default : printf("invalid input");
	break;
}
			
			
}


