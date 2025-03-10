#include<stdio.h>
int main(){
	char ch;
	printf("enter a character");
	scanf("%c",&ch);
	if(ch>='A'&& ch<='Z')
	printf("upper Alphabets");
	else if(ch>='a' && ch<='z')
	printf("lower alphabets");
	else if(ch>='0' && ch<='9')
	printf("number");
	else 
	printf("symbol");
	return 0;
}
