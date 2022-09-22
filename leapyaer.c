// check if the given year is a leap year or not.
#include<stdio.h>
int main(){
	int year;
	printf("Enter A Year: ");
	scanf("%d",&year);
	if((year%4==0)&&(year%400==0||year%100!=0))
	{printf("The Given Year Is Leap Year....");
	}else{printf("The Give Year IS Not A Leap Year...");}
	
}

