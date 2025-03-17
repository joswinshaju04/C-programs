/*Author:Joswin Shaju
  Date:17-03-2025
  a program to check if a number is odd or even using function
*/


#include<stdio.h>
int isEven(int);
int main(){
  int num;
  printf("\nEnter the number:");
  scanf("%d",&num);
  if(isEven(num)){
    printf("the no is even");
  }
  else{
    printf("the no is odd");
  }
  isEven(num);
  return 0;
}
int isEven(int num){
  if (num%2==0){
    return 1;
  }
  else{
    return 0;
  }
}
