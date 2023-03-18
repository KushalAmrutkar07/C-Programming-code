// Accept number from user & display the factor numbers

//Input :  10
//Output : 1 2 5


#include<stdio.h>

void DisplayFactors(int iNo)
{
  int iCnt = 0;
  if(iNo < 0)
  {
     iNo = -iNo;
  } 
 
  for ( iCnt = 1; iCnt <= ( iNo/2) ; iCnt++)
  {
     if((iNo % iCnt ) == 0)
     {
       printf("%d\n",iCnt);
     }
 
   }     
}

int main()
{
  int iValue = 0;
   
  printf("Enter number : \n");
  scanf("%d",&iValue);
  
  DisplayFactors(iValue);  //DisplayFactors(-8);
  
  return 0;
}

// Time Complexity : O(N/2) 