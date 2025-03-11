#include<stdio.h>
#include<stdlib.h>
struct patient{
	   char pname[20];
	   int Pid;
	   char Dis[50];
	   char DRname[20];
	   int ADdate;  
	   int BEDno;
	   float amount;
};
struct doctor{
	   char DRname[20];
	   char specialist[50];
	   int Drid;
	   float salary;
	
};
struct patient s;
struct doctor c;


void addP(){
	printf("enter the patient name:\n");
	scanf("%s",&s.pname);
	printf("enter the patient id:\n");
	scanf("%d",&s.Pid);
	printf("enter the disease name:\n");
	scanf("%s",&s.Dis);
	printf("enter the dr.required:\n");
	scanf("%s",s.DRname);
	printf("eneter the admission date:\n");
	scanf("%d",&s.ADdate);
	printf("enter the bed no.:\n");
	scanf("%d",&s.BEDno);
	printf("enter the total amount:\n");
	scanf("%f",&s.amount);
	
printf("Record Inserted\n");
}
void addD(){
	printf("enter the doctor name:\n");
	scanf("%s",c.DRname);
	printf("enter the which specialist:\n");
	scanf("%s",c.specialist);
	printf("enter the doctor id:");
	scanf("%d",&c.Drid);
	printf("enter the salary of doctor:\n");
	scanf("%f",&c.salary);
	
printf("Record Instered\n");
}
void CFB(){
	int pid;
	printf("\nenter the patient id:");
	scanf("%d",&pid);
    if(s.Pid==pid){
    	printf("bed is found\n");
    		printf("----------------------------\n");
    			printf("|pname -> %s | \n|pid -> %d | \n|disease -> %s | \n|doctor-name -> %s|  \n|admmision-date -> %d | \n|bed-no. -> %d |\n|amount -> %2.f| \n",s.pname,s.Pid,s.Dis,s.DRname,s.ADdate,s.BEDno,s.amount);
}
else{
	printf("Bed not found please enter the correct patient Id . ");
}
	}
void paybill(){
	int pid,amount;
	printf("give your id");
	scanf("%d",&pid);
	printf("give the amount");
	scanf("%d",&amount);
	if(pid && amount == s.Pid &&s.amount)
	printf("your amount bill is successful");
	else
	printf("failed,try again!!!");
}
void menu(){
	printf("_Hospital Mamagement System");
int ch;
do{
	printf("\npress1 add patient\n press2 add doctor\n press 3 for check bad \n press4 for pay bill\n press5 to exit");
	scanf("%d",&ch);
switch(ch){
       case 1:
       	addP();
       	break;
       case 2:
       	addD();
       	break;
       	case 3:
       	CFB();
       	break;
       	case 4:
       	paybill();
       	break;
       	case 5:
       		exit(0);
       		break;
		default:
		printf("Invalid choice !!!!");	
		break;	
}
}while(ch!=5);
}
int main(){
	menu();
	return 0;
}
