#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter a value for a:");
	scanf("%d",&a);
	printf("enter a value for b:");
	scanf("%d",&b);
	printf("enter a value for c:");
	scanf("%d",&c);
	if(a>b && a>c)
	printf("a is max");
	else if(b>a && b>c)
	printf("b is max");
	else
	printf("c is max");
	return 0;
}
