#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value for b:");
	scanf("%d",&b);
	printf("enter the value for c:");
	scanf("%d",&c);
	if(a==b && a==c)
printf("equilateral triangle");
else if(a==b && a!=c || a!=b && a==c)
printf("isoceles triangles");
else
printf("scalen triangles");
return 0;
}
