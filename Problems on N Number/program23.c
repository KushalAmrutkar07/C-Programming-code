//Accept one number and check whether is divisible by 2 or not

#include<stdio.h>
#include<stdbool.h>



bool CheckEven(int iNo)
{

  if((iNo % 2 ) == 0)
  {
    return true;
  }
  
  else
  {
    return false;
  }

}

int main()
{
  int iValue = 0;
  bool bRet = false;

  printf("Enter number\n");
  scanf("%d",&iValue); //21
  
  bRet = CheckEven(iValue);  //checkEven(21)
  if(bRet == true)
  {
    printf("%d is even number\n",iValue);
  }
  else
  {
   printf("%d is odd number\n",iValue);
  }

   return 0;

}