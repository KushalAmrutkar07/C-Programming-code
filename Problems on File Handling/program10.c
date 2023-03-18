// accept file name &  in the file bytes
//input : Marvellous
//output : 10
 
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
 

void DisplayData(char Fname[])
{
    int fd = 0;  //File descriptor
   int iRet = 0;
   char Data[10]; //MUg

   fd = open(Fname,O_RDWR );
   if(fd == -1)
   {
      printf("Unable  to open the file\n");
      return; //Failure
   }
   printf("File is succesfully opened with FD %d\n",fd);
   
   //read(fd,Data,sizeof(Data));
   //read(fd,Data,sizeof(Data));
   //read(fd,Data,sizeof(Data));
   
    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
       write(1,Data,iRet);      
     
    }
    
    close(fd);


}

int main()
{
   char Fname[20];
   
 

   printf("Enter file name to open\n");
   scanf("%s",Fname);
   
   DisplayData(Fname);

   


   return 0;
}