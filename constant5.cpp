#include<iostream>
using namespace std;

 class Demo
 {
   public:
    int i;
    const int j ;
  
   Demo(int a, int b):  j(b)
  {
    i = a;
  }
   void fun()
   {
     cout<<"Inside fun\n";
     i++;      //allowed
    // J++;      Not allowed
    }
    // b is a constant input argument
    void gun(int a , const int b)const
    {
      int x=10;
       int y = 20; //Constant local variable
      
      cout<<"Inside gun\n";
      //i++;   //not allowed
       // j++;    // Not allowed
       x++;     // allowed
      // y++;    //Not allowed
      
       a++;   //allowed
       //b++;   //not allowed
             
     }

};

int main()
{
  
   Demo obj(11,21);
   
    
  return 0;
}



