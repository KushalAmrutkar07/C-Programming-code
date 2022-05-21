#include<stdio.h>

int main()
{
 
 int Arr[5]={10,20,30,40,50};
 
 int *p = &(Arr[0]);
 int *q = &(Arr[4]);
 
 printf("Value of p before increment is %d\n",p);
 p++;
 
 printf("Value of p after increment is %d\n",p);
  
 printf("Value of q before decement is %d\n",q);
 q--;

 printf("Value of q after decrement is %d\n",p);
 
 return 0;
 }