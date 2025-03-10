#include<stdio.h>
# define PI 3.1415
int main(){
	float pi,r,a,circle;
	printf("enter the radius of circle:");
	scanf("%f",&r);
	a=r*r;
	circle=PI*a;
	printf("the area of thr circle =%f",circle);
	return 0;
}
