#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////
//////////////////////////////
//
// Function name : Addition
// Input : Two integers
// Output : Integer
// Description : It is used to perform addition
// Author : Kushal Mahesh Amrutkar
// Date : 05/03/2022
//
//////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////

int Addition(int iNO1,int iNO2)
{
 auto int iAns =0;
  
 iAns = iNO1 + iNO2;
 return iAns;
 
}

/////////////////////////////////////////////////////////////////////////
/////////////////////
// Entry point function of addition application
///////////////////////////////////////////////////////////////////////
////////////////////

int main()
{
  auto int iValue1=0, iValue2 = 0;
  auto int iRet =0;
  
  printf("Enter first numbe\n");
  scanf("%d", &iValue1);
  
  printf("Enter second number\n");
  scanf("%d",&iValue2);
 
  iRet = Addition (iValue1 , iValue2);
  
  printf("Addition is : %d\n",iRet);
    
  return 0;
}

