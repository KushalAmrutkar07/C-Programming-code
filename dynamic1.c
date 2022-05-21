#include<stdio.h>
#include<stdlib.h>

int main()
{
  int size = 0;
  int *ptr =NULL;

 printf("Enter number of elements :");
 scanf("%d",&size);

 ptr = (int*)malloc(size * sizeof(int));     //step 1: Allocate the memory
 if(ptr==NULL)
 {
  printf("Unableto allocate memory\n");
}
 else
 {
  printf("Memory succesfully allocated\n");
}

 //step 2: Use the memory

 free(ptr);  // step 3: Free the memory
 return 0;
}

  


















