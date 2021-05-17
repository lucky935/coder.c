#include<stdio.h>
int main(){

	int first,second;
	printf("enter first integer value %d\n");
	scanf("%d",&first);
	printf("enter second integer value%d\n");
	scanf("%d",&second);
	first=first-second;
	second=first+second;
	first=second-first;
	printf("\after swapping value of first integer is %d\nsecond integer is %d",first,second);
	

}
