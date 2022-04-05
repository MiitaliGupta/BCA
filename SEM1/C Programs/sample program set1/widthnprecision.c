//sample 5 width and precision in printf
#include<stdio.h>
main()
{
	int x= 546,y=10;
	float z = 256.3465;
	printf("x is %d  , y is %d , z is %f\n" ,x ,y ,z);
	printf("Precision(7) in Integer x is %7d\n",x);
	printf("Precision(2) in Integer x is %2d\n",x);
	printf("Precision(y) in Integer x is %*d\n",y ,x);
	printf("Precision(2) in float z is %.2f\n",z);
	printf("Precision(y) in float z is %.*f\n",y ,z);
	printf("Precision(2) in Integer x is %2d\n",x);
	printf("Width and Precision(8,4) in float z is %8.4f\n",z);
}
