#include<stdio.h>
int input_n_and_r(int *n, int *r)
{
  printf("enter the value of n and r\n");
  scanf("%d %d", n , r);
}
int ncr(int n, int r)
{ /*int i, result,b,final = 1; 
  int prod =1;
  int run = 1;
  int a = (n-r);
  for(i=n;i>=1;i--)
    {  
       prod = prod*i;
    }
  for(i=r;i>=r;i--)
    {
      run = run*i;
    }
  for(i=a;i>=1;i--)
    {
      final = final*i;
    }
  b = final*run;
  result = prod/b;
  return result;*/
 int factorial(int n) 
 {
    int factorial = 1;
    for (int i = n; i >= 1; i--)
        factorial = factorial * i;
    return factorial;
  }
  return factorial(n) / (factorial(r) * factorial(n - r)); 
}
void output(int n, int r, int result)
{
  printf("%d^C%d = %d\n",n,r,result);
}
int main()
{
  int n, r, result;
   input_n_and_r(&n, &r);
  result=  ncr(n,  r);
   output( n, r,  result);
  return 0;
  
}