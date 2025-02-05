#include<stdio.h>
int main(){
  int i,lim,max,min;
  printf("\nEnter the limit:");
  scanf("%d",&lim);
  int num[lim];
  printf("\nEnter the elements:");
  for(i=0;i<lim;i++){
    scanf("%d",&num[i]);
    
  }
   max=num[0];
   min=num[0];
  for(i=0;i<lim;i++){
    if(num[i]>max){
      max=num[i];
    }
    if(num[i]<min){
      min=num[i];
      break;
    } 
  }
  printf("\nthe max is : %d", max);
  printf("\nthe min is : %d", min);
  return 0;
}
