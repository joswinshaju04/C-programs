/*Author:Joswin Shaju
  Date:19-02-2025
  a program to input two strings and compare them.
*/

#include<string.h>
#include<stdio.h>
int main(){
  char str1[20],str2[20];
  printf("\n Enter the first string:");
  scanf("%s",str1);
  printf("\n Enter the first string:");
  scanf("%s",str2);
  
  int comp=strcmp(str1,str2);
  if(comp==0){
    printf("\n They are equal");
  }else{
    printf("\n They are not equal");
  }
  return 0;
}
