/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int sub1 ,sub2 , total = 0 , average = 0 ;//variable declaration

  printf("Enter mark 1 : ");
  scanf("%d" , &sub1);

  printf("Enter mark 2 : ");
  scanf("%d" , &sub2);

  total = sub1 + sub2 ;
  average = total / 2 ;

  printf("Total is : %d \n" , total);
  printf("Average is : %d" , average);

  return 0;
}

