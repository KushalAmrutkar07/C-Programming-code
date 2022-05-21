#include<stdio.h>
#include<stdlib.h>

int main()
{
 int size = 0;
 int *ptr = NULL;

 printf("Enter number of elements");
 scanf("%d",&size);
 
 ptr =(int *)calloc(size,sizeof (int));   //step1; Allocate the memory 
   if (ptr == NULL)
   {
    
 printf("Unable to allocate memory\n");
 }
 else
 {
  printf("Memory succesfully allocated\n");  //step 2: Use the memory
}

 free(ptr);                                  // step 3: free the memory
    return 0;
}   
     