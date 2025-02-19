/*Author:Joswin Shaju
  Date:19-02-2025
  a program to count the frequency of each character in a given string.
*/

#include<stdio.h>
int main(){
  char str[500];
  int freq[26]={0};
  printf("\n Enter the string:");
  fgets(str,sizeof(str),stdin);
  for(int i=0;str[i]!='\0';i++){
    char  ch=str[i];
    if(str[i]>='A' &&  str[i]<='Z'){
      ch=ch+32;
      }
      if(str[i]>='a' && str[i]<='z'){
        freq[ch-97]++;
      }
  }
  
  for(int i=0;i<26;i++){
    if(freq[i]!=0){
      printf("%c:%d\n",i+97,freq[i]);
    }
  }
  return 0;
}
  
