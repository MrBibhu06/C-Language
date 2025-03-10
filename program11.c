#include<stdio.h>
int main(){
	float triangle;
	int h,b;
	printf("enter the height of triangle:");
	scanf("%d",&h);
	printf("enter the base of triangle:");
	scanf("%d",&b);
	triangle=0.5*(h+b);
	printf("the area of triangle is %f",triangle);
	return 0;
}
