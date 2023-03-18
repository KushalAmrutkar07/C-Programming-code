//Input : 4 
//Output : 10 (1+2+3+4)

//Input : 5 
//Output : 15 (1+2+3+4+5)

//Input : 7
//Output : 28 (1+2+3+4+5+6+7)

/*
     Algorithum
    
      START 
      Accept number from user as No
      Check whether that number is negative or not
      if it is negative then convert it to psitive
     
      Create one variable as Sum and set it to 0
      Crate  one variable as cnt   and set it to 1
      
     Iterate till Cnt is less than or equal to No
     add the value of Cnt into the variable Sum
     Increment the value of Cnt by 1
     LOOP
     
    Display the value of Sum 
   END

*/

#include<stdio.h>

Summation(int iNo)
{
  int iSum = 0;
  int iCnt = 0;
  
  
  if(iNo < 0 )
 {
   iNo = -iNo;
 
 }

 for(iCnt = 1; iCnt <= iNo; iCnt++)
 {
   iSum = iSum + iCnt;
 }
 return iSum;

}


int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number\n");
  scanf("%d",&iValue);
 
  iRet = Summation(iValue);
  printf("Summation is :%d\n",iRet);
 
  return 0;

}





