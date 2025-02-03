#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("\nEnter the first no:");
    scanf("%d",&num1);
    printf("\nEnter the second no:");
    scanf("%d",&num2);
    printf("\nEnter the third no:");
    scanf("%d",&num3);
    if(num1>num2){
        if(num1>num3){
             printf("\nThe largest no is: %d",num1);
        }
        else{
             printf("\nThe largest no is: %d",num3);
        }
    }
        else{
            if(num2>num3){
                 printf("\nThe largest no is: %d",num2);
            }
            else{
                 printf("\nThe largest no is: %d",num3);
            }
        }        
    return 0;
}