/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

	int subject1 ,subject2,sum;
	float avg;
	
	
	
    printf("enter the subject1 :");
    scanf("%d",&subject1);
    printf("enter the subject1 :");
    scanf("%d",&subject2);
    
  sum  =  subject1 + subject2;
  
  avg  = (float)sum /2;
    
    printf(" avg mark is :%.2f\n",avg);
    
    
	return 0;
}



