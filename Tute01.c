/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int No1,No2;
  int total;
  int average;
  //Enter no1
  printf("Enter number 1:\n");
  scanf("%d",&No1);

  //Enter no2
printf("Enter numbe 2:\n");
scanf("%d",&No2);

//total
total=No1+No2;
printf("Total is:%d\n",total);

//average
average=total/2;
printf("Average is:%d\n",average);
 
 return 0;

}