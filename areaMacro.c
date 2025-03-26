/*Author:Joswin Shaju
  Date:26-03-2025
  a program to find area of circle and cylinder using MACRO
*/

#include<stdio.h>
#define PI 3.14159
int main(){
	float r,h;
	printf("\nEnter the radius:");
	scanf("%f",&r);
	printf("\nEnter the height:");
	scanf("%f",&h);
	float areaCircle,areaCylinder;
	areaCircle=PI*r*r;
	areaCylinder=2*PI*r*(r+h);
	printf("\nThe area circle is %f and area of cylinder is %f\n",areaCircle,areaCylinder);
	return 0;
}
