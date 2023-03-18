//accept two  number from user a & b & output is A^b
//input = 2     4
//output = 16 (2*2*2*2)

# include"Header59.h"

typedef unsigned long int ULONG;

ULONG Power(int iNo1,int iNo2)
{
  ULONG lMult = 1;
   register int iCnt = 0;

  
//     1             2                     3
  for(iCnt = 1;iCnt <= iNo2; iCnt++)
  {
    lMult = lMult * iNo1;  //4
  }
  return lMult;
}  





