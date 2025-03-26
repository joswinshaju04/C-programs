/*Author:Joswin Shaju
  Date:26-03-2025
  a program to find the power of a number
*/

#include<stdio.h>
int numpow(int n,int pow){
	if(pow==0){
		return 1;
	}
	else{
		return n*numpow(n,pow-1);
	}
}

int main(){
	int n,pow,ans;
	printf("enter the num and power:");
	scanf("%d%d",&n,&pow);
	ans=numpow(n,pow);	
	printf("The power of %d is %d",n,ans );
	return 0;
}
