//WAP to find simple interest
#include<stdio.h>
int main (){
	int p;
	float r,t;
	printf("\nEnter Your Principle Amount: ");
	scanf("%d",&p);
	printf("\nEnter Your Rate Of Intrest: ");
	scanf("%f",&r);
	printf("\nEnter Time Of Intrest(in year): ");
	scanf("%f",&t);
	printf("\nSimple Intrest:%f",(p*r*t)/100);
} 
