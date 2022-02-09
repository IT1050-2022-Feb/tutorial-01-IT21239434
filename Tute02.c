/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() 
{
  //variable declaration
  float distance = 0 ,amount = 0, rem ;

  //getting input
  printf("Enter the distance :");
  scanf("%f" , &distance);

  //calculation
  if( distance <= 30 )
  {
    amount = distance * 50 ;
  }
  else
  {
    rem = distance - 30.0 ;
    amount = (rem * 40) + (30 * 50) ;
  }

  //output
  printf("Full amount : %.2f",amount);

  return 0;
}
