// Non linear border code with optimization
// Input Row  4  coloumn 4
/*
 *  *  * *
 *  *  *
 *  *
 *
 
 
*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
   int i = 0 , j = 0;
   
   
   for( i = iRow; i >= 1 ; i--) //outer
   {
   //                1           2                3
      for(j =1; j<= i; j++) //inner
      {
          printf("*\t");
         
      }
      printf("\n");
  }

}

int main()
{
   int iValue1 = 0 , iValue2 = 0;
   
   printf(" Enter number of rows :\n");
   scanf("%d",&iValue1);
   
   printf(" Enter number of columns :\n");
   scanf("%d",&iValue2);

   Display(iValue1,iValue2); 


   return 0;
}