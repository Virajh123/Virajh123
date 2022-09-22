#include<stdio.h>
#define balance=1000rs;
int main(){
	int accno,pin,choice;
	printf("Enter Your Account No.: ");
	scanf("%d",&accno);
	printf("Enter Your Pin: ");
	scanf("%d",&pin);
	if(accno==11){
		if(pin==123){
			printf("Succesfully Login...\n");
		}else{
			printf("Invalid Pin...\n");
		}
	}else{printf("Invalid Acc No...\n");
	}
	printf("Choose The Following Option\n");
	printf("1.Deposit: \n");
	printf("2.Withdraw: \n");
	printf("3.Balance: \n");
	printf("4.Exit: \n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("You Choose Deposit: ");
			break;
		case 2:
		printf("You Choose Withdraw");
		break;
		case 3:	
		printf("Your Balance Is 1000 RS...");
		case 4:
			printf("Thank You...");
			break;
	}
}
