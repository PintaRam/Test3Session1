#include<stdio.h>
int input_degree()
{   int n;
  printf("enter the degree of x\n");
  scanf("%d",&n);
  return n;
}
float input_x()
{
  float x;
  printf("enter the value of x\n");
  scanf("%f",&x);
  return x;
}
void input_coefficients(int n, float a[n])
{
  printf("enter the coefficient\n");
  for(int i=0;i<=n;i++)
    scanf("%f",&a[i]);  
}
float evaluate_polynomial(int n, float a[n], float x)
{
  int b = 0,result;
  for(int i=0;i<=n;i++)
    {
      result = b + a[i];
      b = result*x;
    }
  return result;
}
void out_put(/*int n, float a[n], float x,*/ float result)
{
  printf("%f\n",result);
}
int main()
{
  float x,result;
  int n;
  n = input_degree();
  float a[n];
  x =  input_x();
   input_coefficients(n,  a);
result =  evaluate_polynomial( n, a,x);
   out_put(result);
  return 0;
}