#include <stdio.h>
#include <stdlib.h>
int main(){
double left, right;
while(1){
printf("Please enter the cost of going left:");
if (scanf("%lf", &left)!=1)
{
printf("Please enter the cost of going right:");
 scanf("%lf", &right);
 if (left<=right)
  printf("Go left");
  else
 printf("Go right");
 return 0;
  }                         
else 
{return 1;}
}}
