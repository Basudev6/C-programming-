 // Wap to find compound interest.
#include<stdio.h>
#include<math.h>
void main()
{ 
  float p,r,t,ci;
  printf("Enter principle in Rs,rate and time in years  respectively:\n");
  scanf("%f%f%f",&p,&r,&t); 
  ci= p*(pow((1+r/100),t));
  printf("The compound interest is %.2f",ci);
  
}
