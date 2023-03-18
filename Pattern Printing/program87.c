//linear number line printing

//input = 4 
//output : - 4- 3- 2 -1 0 1 2 3 4
//O(2N)

#include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0;
  
  for( iCnt = -iNo; iCnt<=iNo;iCnt++)
  {
      printf("%d\t",iCnt); 
  }
 
}

int main()
{
   int iValue = 0;
   
   printf("please enter the value :\n");
   scanf("%d",&iValue);
   
   Display(iValue); 


   return 0;
}