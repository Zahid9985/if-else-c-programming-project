#include<stdio.h>
int main()
{
	int acc,p1,p2,p3,cm ,fam, dm, fam2 ;
	
	printf("Wellcome to SBI \n");
	
	printf("loading...\n\n");
	
	printf("Enter 10 digit account number:\n");
	scanf("%d",&acc);
	
	printf("For Check Balance --press1\n");
	printf("For Credit ammount--press2 \n");
	printf("For Debited ammount--press3\n");
	scanf("%d,%d,%d",&p1,&p1,&p1);
	/*scanf("%d",&p1);
	scanf("%d",&p1);
	scanf("%d",&p1);*/
	  if(p1==1){
	  	printf("Your Balance is-20,000");
	  }
	  
	  else if(p1==2){
	  	printf("How much ammount you want to credit ?\n");
	  	scanf("%d",&cm);
	  	printf("Credied Succesfully\n\n");
	  	fam=20000+cm;
	  	printf("After credied ammount your balence is now..%d",fam);
	  	
	  	
	  }
	  else if(p1==3){
	  	printf("How much ammount you want to debited ?\n");
	  	scanf("%d",&dm);
	  	printf("debited Succesfully\n\n");
	  	fam2=20000-dm;
	  	printf("After debited ammount your balence is now..%d",fam2);
	  	
	  }
	  else{
	  	printf("INVALIDE!!");
	  }
	
	
	
	
	
	
return 0;	
}
