/*Author:Joswin Shaju
  Date:02-04-2025
  a program to enter student details using structure
*/

#include<stdio.h>
typedef struct{
	char name[10];
	int rollNo;
	float cgpa;
}student;
int main(){
	int n;
	printf("enter the limit");
	scanf("%d",&n);
	student s[n];
	for(int i=0;i<n;i++){
		printf("\nEnter the name:");
		scanf("%s",s[i].name);
		printf("\nEnter the roll no:");
		scanf("%d",&s[i].rollNo);
		printf("\nEnter the CGPA:");
		scanf("%f",&s[i].cgpa);
	}
	for(int i=0;i<n;i++){
		printf("\nName: %s",s[i].name);
		printf("\nRoll No: %d",s[i].rollNo);
		printf("\nCGPA: %f\n",s[i].cgpa);
	}
	return 0;
}
