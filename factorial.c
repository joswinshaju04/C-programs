#include<stdio.h>
int main(){
  int num,fact=1;
  printf("\nenter the no:");
  scanf("%d",&num);
  while(num>0){
    fact=fact*num;
    num=num-1;
    
  }
  printf("\nthe factorial is:%d",fact);
  return 0;
}
