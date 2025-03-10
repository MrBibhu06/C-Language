#include<stdio.h>
int main(){
	int per;
	printf("enter the student percentage");
	scanf("%d",&per);
	if(per>60)
	printf("1st division");
	else if(per>50)
	printf("2nd division");
	else if(per>35)
	printf("3rd division");
	else 
	printf("faill");
return 0;
}
