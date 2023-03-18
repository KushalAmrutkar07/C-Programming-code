//accept two  number from user a & b & output is A^b
//input = 2     4
//output = 16 (2*2*2*2)

/*
   START 
       Accept one number as no1 
      Accept  anothe number as no2 
      
      Create one variable as Mult
      Set the value 1 in the variable Mult

      Create one counter as Cnt
      Set the counter to 1
     
     Loop:
     Iterate till the counter is less than or equal to no2
        mult = Mult * no1
        increment the counter by 1
     Go to Loop

    Display the value of mult
END

no1=2
no2=4
mult=1

mult = mult*no1
mult = mult*no1
mult = mult*no1
mult = mult*no1

for(cnt = 1 ; cnt <= no2; cnt++)
{
  mult = mult*no1;
}

*/

# include<stdio.h>

unsigned long int Power(int iNo1,int iNo2)
{
  unsigned  long int lMult = 1;
   register int iCnt = 0;

  
//     1             2                     3
  for(iCnt = 1;iCnt <= iNo2; iCnt++)
  {
    lMult = lMult * iNo1;  //4
  }
  return lMult;
}  

int main()
{
    auto int iValue1 = 0; 
   auto int  iValue2 = 0;
   auto unsigned long int  lRet = 0;

   printf("Enter base: \n");
   scanf("%d",&iValue1);
   
   printf("Enter base: \n");
   scanf("%d",&iValue2);

   lRet = Power(iValue1,iValue2); //power(2,4)
   
   printf("Result is : %d\n",lRet);

   return 0;
}  




