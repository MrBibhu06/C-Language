#include<stdio.h>
int main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if(num%2==0)
		printf("the number is even");
	else
	printf("the number is odd");
	return 0;
}
