#include<stdio.h>

//PROGRAM TO FIND AVERAGE OF n NUMBERS USING ARRAYS
 int main()
 {
int marks[10],i,sum=0,n,average;

printf("enter number of elements ");
scanf("%d",&n);
for(i=0;i<n;++i)
{
	printf("Enter number %d",i+1);
	scanf("%d",&marks[i]);
	sum+=marks[i];
	/*meaning we use braces after for since its anothet statement*/
	
}
average=sum/n;
printf("Avarage=%d",average);

	 return 0;
 }