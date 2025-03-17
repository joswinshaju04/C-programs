/*Author:Joswin Shaju
  Date:17-03-2025
  a program to find the product of two no using function
*/


#include<stdio.h>
void multiply(int,int);
int main(){
  int num1,num2;
  printf("\nEnter the first and second number:");
  scanf("%d%d",&num1,&num2);
  multiply(num1,num2);
  return 0;
}
void multiply(int num1,int num2){
  int prdt;
  prdt=num1*num2;
  printf("\n%d*%d=%d",num1,num2,prdt);
}  
