/*Author:Joswin Shaju
  Date:26-03-2025
  a program to find sum of an array in using function
*/

#include<stdio.h>
int arraySum(int num[],int sum,int limit);
int main(){
	int limit,sum=0;
	printf("Enter the limit:");
	scanf("%d",&limit);
	int num[limit];
	printf("Enter the elements:");
	for(int i=0;i<limit;i++){
		scanf("%d",&num[i]);
	}	
	sum=arraySum(num,sum,limit);	
	printf("The sum is: %d",sum);
}
int arraySum(int num[],int sum,int limit){
	for(int i=0;i<limit;i++){
		sum=sum+num[i];
	}
	return sum;
}
