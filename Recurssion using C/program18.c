//Accept array from user 

//6
// a b c d e f  

#include<stdio.h>

   
void Display (int iNo)
{  
  
  static char ch = 'a';

   if(iNo > 0)
   {
     printf("%c\t",ch);
     ch++;
     iNo--;
     Display(iNo);    

   }

}

int main()
{
   int iValue = 0;
   
  
  printf("Enter number\n");
  scanf("%d",&iValue);

  Display(iValue);
     
  return 0;
}