#include<stdio.h>

int Addition (int NO1,int NO2)
{
int Ans = 0;
Ans = NO1 + NO2;

return Ans;
}
int main ()
{
int A=10,B =11,C=0;

C= Addition (A,B);

printf("%d",C);

return 0;

}
