#include<stdio.h>

int main()
{
 auto int iStd =0;
 
 printf("Enter your standard\n");
 scanf("%d",&iStd);
 
 switch(iStd)
 {
  
  case1:
       printf("Your exam is at 8\n"); 
       
       break;

 
  case 2:
       printf("Your exam is at 9\n"); 

       break;

  case3:
       printf("Your exam is at 10\n");

       break;
       
  case4:
       printf("Your exam is at 11\n");
      
      break;
     
   case5:
         printf("Your exam is at 12\n");
         
         break;
     
    default:
         printf("Invalid standard\n");
 }
 return 0;
}      