#include<stdio.h>
 #include<stdlib.h>
 int main()
 {
 float principal, time, rate, SI;
 printf("Enter the principal amount:");
 scanf("%f", &principal);
 printf("Enter the time period:");
 scanf("%f", &time);
 printf("Enter the rate of intrest:");
 scanf("%f", &rate);
 SI=(principal * time * rate)/100;
 printf("simple intrest for principal amount %2f is % .2f", principal,SI);
 return 0;
 }

