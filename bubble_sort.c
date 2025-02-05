#include <stdio.h>
int main(){
  int n;
  printf("\nEnter the limit:");
  scanf("%d",&n);
  int num[n];
  printf("\nEnter the %d elements:",n);
  for(int i=0;i<n;i++){
    scanf("%d",&num[i]);
  }
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i;j++){
      if(num[j]>num[j+1]){
        int temp=num[j];       
        num[j]=num[j+1];
        num[j+1]=temp;
      }
    }
  }
  printf("\nThe sorted array:\t");
  for(int i=0;i<n;i++){
    printf("%d\t",num[i]);
  }
  return 0;
}
