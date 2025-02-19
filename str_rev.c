/*Author:Joswin Shaju
  Date:19-02-2025
  a program to reverse a string without using string library functions 
*/



#include<stdio.h>
int main(){
  char str[20];
  printf("\n Enter the string:");
  scanf("%s",str);
  int len=0;
  char temp;
  for(len=0;str[len]!='\0';len++);
  int i=len-1;
  for(int j=0;j<len/2;j++){
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    i--;
  }
  printf("\n The reversed string is:%s",str);
  return 0;
}
