//pattern printing

//input = 4 
//output :  4 3 2 1 1234
//O(2N)

#include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0;
  
  for( iCnt =iNo; iCnt>=1;iCnt--)
  {
      printf("%d\t",iCnt); 
  }

  for(iCnt = 1; iCnt<= iNo; iCnt++)
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