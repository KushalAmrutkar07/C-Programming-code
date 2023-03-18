//suvichar : Maximum throughput in Minimum  hardware movement
// accept file name & count Captial charactr  in the file bytes
//input : Marvellous
//output : 10
 
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
 
#define FILESIZE 1024

int CountCapital(char Fname[])
{
    int fd = 0,  iRet = 0,i = 0, iCnt = 0;
   char Data[FILESIZE]; 
  

   fd = open(Fname,O_RDWR );
   if(fd == -1)
   {
      printf("Unable  to open the file\n");
      return -1; //Failure
   }
  
   
   
    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
         for(i= 0;i< iRet; i++)
         {
             if(Data[i] >= 'A' && Data[i] <= 'Z')
             {
                 iCnt++;
             }
          }      
     
    }
    
    close(fd);
    return iCnt;

}

int main()
{
   char Fname[20];
   int iRet = 0;
   

   printf("Enter file name to open\n");
   scanf("%s",Fname);
   
   iRet = CountCapital(Fname);
   printf("Number of Capital character are : %d\n",iRet);
   


   return 0;
}