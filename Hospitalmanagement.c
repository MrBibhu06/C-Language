#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
FILE *fp;
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
int menu();
int addP();
int addD();
int CFB();
int paybill();
int dischargeP();


int addP(){
	struct patient s;
	fp=fopen("hospital.txt","a");
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
	
fprintf(fp,"%s\t%d\t%s\t%s\t%d\t%d\t%f\n",s.pname,s.Pid,s.Dis,s.DRname,s.ADdate,s.BEDno,s.amount);
printf("Record Inserted\n");
fclose(fp);
}
int addD(){
	struct doctor c;
	fp=fopen("hospital.txt","a");
	printf("enter the doctor name:\n");
	scanf("%s",c.DRname);
	printf("enter the which specialist:\n");
	scanf("%s",c.specialist);
	printf("enter the doctor id:");
	scanf("%d",&c.Drid);
	printf("enter the salary of doctor:\n");
	scanf("%f",&c.salary);
	
fprintf(fp,"%s\t%s\t%d\t%f\n",c.DRname,c.specialist,c.Drid,c.salary);
printf("Record Instered\n");
fclose(fp);
}
int CFB(){
	struct patient s;
	FILE *readfile=fopen("hospital.txt","r");
	int pid,found=0;
	
	if(readfile==NULL){
		printf("file not found \n");
	}      
	printf("\nenter the patient id:");
	scanf("%d",&pid);
	while(fscanf(readfile,"%s\t%d\t%s\t%s\t%d\t%d\t%f\n",s.pname,s.Pid,s.Dis,s.DRname,s.ADdate,s.BEDno,s.amount)!=EOF){
    if(s.Pid==pid){
    	printf("bed is found\n");
    		printf("_\n");
    			printf("|pname\t\t|pid\t\t |disease\t\t|doctor name\t\t|admmision date\t\t|bed no.\t\t|amount\n");
    			printf("||||||||||||||\n");
    			printf("%s\t%d\t%s\t%s\t%d\t%d\t%f\n",s.pname,s.Pid,s.Dis,s.DRname,s.ADdate,s.BEDno,s.amount);
    			printf("||||||||||||||\n");
    			found=1;
				break;
	}		
	}
}
int paybill(){
	int pid,amount;
	struct patient s;
    FILE *readfile=fopen("hospital.txt","r");
	printf("give your id");
	scanf("%d",&pid);
	printf("give the amount");
	scanf("%d",&amount);
	if(pid && amount == s.Pid &&s.amount)
	printf("your amount bill is successful");
	else
	printf("failed,try again!!!");
	fclose(fp);
}
int menu(){
	printf("_Hospital Mamagement System");
int ch;
while(1){
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
}
}
}
int main(){
	menu();
	return 0;
}
