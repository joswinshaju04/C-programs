/*Author:Joswin Shaju
  Date:02-04-2025
  a program to find the total and  average mark of a roup of students 
*/


#include<stdio.h>
typedef struct{
	char name[10];
	int rollNo;
	int maths;
	int chemistry;
	int physics;
}student;
int main(){
	int n;
	printf("enter the limit:");
	scanf("%d",&n);
	student s[n];
	for(int i=0;i<n;i++){
		printf("\nEnter the name:");
		scanf("%s",s[i].name);
		printf("\nEnter the roll no:");
		scanf("%d",&s[i].rollNo);
		printf("\nEnter the mark of maths:");
		scanf("%d",&s[i].maths);
		printf("\nEnter the mark of chemistry:");
		scanf("%d",&s[i].chemistry);
		printf("\nEnter the mark of physics:");
		scanf("%d",&s[i].physics);
		
	}
	int avg_mark=0,totl_mark=0;
	for(int i=0;i<n;i++){
		totl_mark+=s[i].maths+s[i].chemistry+s[i].physics;
		
	}
	avg_mark=totl_mark/n;
	printf("\nTotal mark is : %d\n",totl_mark);
	printf("Average mark is : %d\n",avg_mark);
	return 0;	
}	
