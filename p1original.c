#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("enter the value of first fraction\n");
  scanf("%d %d",num1,den1);
  printf("enter the value of second fraction\n");
  scanf("%d %d",num2,den2);
  
}
void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{ int x ,y ,gcd;
  x = (num1*den2) + (num2*den1);
  y = den1*den2;
  for(int i=1; i <= x && i <= y; i++)
    {
        // Checks if i is factor of both integers
        if(x%i==0 && y%i==0)
            gcd = i;
    }
  *num3 = x/gcd;
  *den3 = y/gcd;
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("sum of %d/%d + %d/%d = %d/%d ",num1,den1,num2,den2,num3,den3);
}
int main()
{
int  num1, den1, num2, den2, num3, den3;
  input(&num1, &den1, &num2, &den2);
  add(num1, den1, num2, den2, &num3, &den3);
 output(num1, den1, num2, den2, num3, den3);
  return 0;
}
