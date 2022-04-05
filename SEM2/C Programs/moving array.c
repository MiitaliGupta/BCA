//moving averages
#include<stdio.h>
#include <stdlib.h>
int main()
{
int a[50],n,j,i,x;
float avg=0.0,sum=0.0;

printf("enter length of array : ");
scanf("%d",&n);

printf("Enter all %d numbers below :\n",n);
for(j=0;j<n;j++)
scanf("%d",&a[j]);

printf("enter no. of digits whose avg is to be calculated : ");
scanf("%d",&x);
int y=x;

for(i=0;i<x;i++)
sum=sum+ a[i];
avg= sum/(float)x;
printf("Avg of 1 to %d = %.2f\n",x,avg);


for(i = 0; i<(n-x) ;i++)
{
sum = sum - a[i] +a[y];
avg= sum/(float)x;
printf("Avg of %d to %d = %.2f\n",(i+2),(i+(x+1)),avg);
y++;
}
return(0);  
}
