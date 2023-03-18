//open existing file  & enter the file to open

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

//O_RDONLY  READ
//O_WRONLY  WRITE
//O_RDWRONLY  READ + WRITE

//permissions    0_Owner_Group_Other 
int main()
{
   char Fname[20];
   

   int fd = 0;  //File descriptor

   printf("Enter file name to open\n");
   scanf("%s",Fname);
   
  

   fd = open(Fname,O_RDONLY);
   if(fd == -1)
   {
      printf("Unable to create the file\n");
      return -1; //Failure
   }
   
   printf("File is succesfully opened with FD %d\n",fd);
    
  
 
  return 0;
}