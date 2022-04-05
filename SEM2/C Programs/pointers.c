//Pointers
#include<stdio.h>
#include<stdlib.h>
void change(int * x,int p);
main()
{
int a[3],i,n=3;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("before");
for(i=0;i<n;i++)
printf("%d  ",a[i]);
printf("\n\n");
//printf("i=%d\ta[i]=%d\t*(a+i)=%d\t*(i+a)=%d\ti[a]=%d\n",i,a[i],*(a+i),*(i+a),i[a]);
change(a,n);
printf("\nafter");	
for(i=0;i<n;i++)
printf("%d  ",a[i]);
getch(); 
}
void change(int * x,int p)
{int i;
	for(i=0;i<p;i++)
	//*(x+i)=10;
	scanf("%d",&*(x+i));
	
}
