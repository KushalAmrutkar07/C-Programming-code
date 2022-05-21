#include<stdio.h>
#include<stdio.h>

int main()
{
 int *ptr = NULL;
 
 ptr =(int *)realloc(NULL,5 * sizeof(int));  // It behaves like malloc
 
 realloc(ptr,0);                            // It behaves like free
 
 return 0;
}