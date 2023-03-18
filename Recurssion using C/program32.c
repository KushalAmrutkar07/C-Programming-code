//Accept array from user 

//6
// a b c d e f  

#include<stdio.h>

   
void Display (char *str)
{  
  if(*str != '\0')
  {
     
     
     printf("%s\n",str);
     Display(str+1);     

  }

}

int main()
{
   char Arr[20];
   
  
  printf("Enter string\n");
  scanf("%[^\n]s",Arr);

  Display(Arr);
     
  return 0;
}