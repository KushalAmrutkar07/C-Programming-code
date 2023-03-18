//Accept number from user return the no of digits from that number

#include<stdio.h>

// Input : 7213
//Output : 4

int CountDigits(int iNo)
{
   
   int iCnt = 0;
   if(iNo< 0)  
   {
      iNo = -iNo;
   }

   while( iNo > 0 )
   {
      iCnt++;
      iNo = iNo/10;
   }
   return iCnt;  
}

int main()
{
  int iValue = 0;
  int iRet = 0;
  printf("Enter number\n");
  scanf("%d",&iValue);
    
   iRet = CountDigits(iValue);
   
   printf("Number of digits are : %d\n",iRet);
  
  return 0;

}