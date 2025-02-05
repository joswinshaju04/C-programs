#include <stdio.h>
int main(){
  int lim,i,item;
  printf("\nEnter the limit:");
  scanf("%d",&lim);
  int array[lim];
  printf("\nEnter the %d elements:",lim);
  for(i=0;i<lim;i++){
    scanf("%d",&array[i]);
  }
  printf("\nEnter the element to search:");
  scanf("%d",&item);
  for (i=0;i<lim;i++){
    if(item==array[i]){
    printf("\nThe given element is at: %d",i+1);
    }
    else{
      printf("\nInvalid Search");
    }
  }
  return 0;
}
