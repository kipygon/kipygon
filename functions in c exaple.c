#include<stdio.h>
int add(int, int);

//working on functions

int main()
{
	int n=20,m=30,sum;
	sum=add(m,n);
	printf("sum =%d",sum);
	
}

int add(int a,int b)
{ 
	return(a+b);
}