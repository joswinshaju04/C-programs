#include<stdio.h>
int main(){
  FILE *fp;
  int words=0,lines=0,chars=0;
  fp=fopen("test.txt","r");
  char ch;
  while(fscanf(fp,"%c",&ch)==1){
    chars++;
    if(ch==' '||ch=='.'){
       words++;
    }
    if (ch=='\n'){
      lines++;    
    }
  }
  printf("Word Count=%d",words);
  printf("\nLine Count=%d",lines);
  printf("\nChar Count=%d\n",chars);
  fclose(fp);
  return 0;
}
