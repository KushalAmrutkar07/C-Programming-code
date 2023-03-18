//accept two  number from user a & b & output is A^b
//input = 2     4
//output = 16 (2*2*2*2)

# include"Header59.h"

int main()
{
    auto int iValue1 = 0; 
   auto int  iValue2 = 0;
   auto ULONG  lRet = 0;

   printf("Enter base: \n");
   scanf("%d",&iValue1);
   
   printf("Enter base: \n");
   scanf("%d",&iValue2);

   lRet = Power(iValue1,iValue2); //power(2,4)
   
   printf("Result is : %d\n",lRet);

   return 0;
}  




