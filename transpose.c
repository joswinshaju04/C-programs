/*Author:Joswin Shaju
  Date:07/02/2025
  Transpose of a Matrix
*/

#include<stdio.h>
int main(){
  int row,col;
  printf("\nEnter the row and column:");
  scanf("%d%d",&row,&col);
  int m1[row][col];
  printf("\nEnter the elements:\n");
    for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
        scanf("%d",&m1[i][j]);
    }
  }
  printf("\nThe matrix:\n");
  for(int i=0;i<col;i++){
    for(int j=0;j<row;j++){
      printf("%d\t",m1[j][i]);
    }
    printf("\n");
  } 
  return 0;
}
