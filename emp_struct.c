/*Author:Joswin Shaju
  Date:02-04-2025
  a program to enter deails of n employees using structure
*/

#include<stdio.h>
typedef struct{
	char name[10];
	int ID;
	float salary;
}employee;
int main(){
	int n;
	printf("enter the limit:");
	scanf("%d",&n);
	employee e[n];
	for(int i=0;i<n;i++){
		printf("\nEnter the name:");
		scanf("%s",e[i].name);
		printf("\nEnter the ID:");
		scanf("%d",&e[i].ID);
		printf("\nEnter the salary:");
		scanf("%f",&e[i].salary);
	}
	for(int i=0;i<n;i++){
		printf("\nName: %s",e[i].name);
		printf("\nID: %d",e[i].ID);
		printf("\nSalary: %f\n",e[i].salary);
	}
	return 0;
}
