#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;
Fraction input_fraction()
{
 Fraction a;
  printf("enter the value of numerator and denominator\n");
scanf("%d %d",&a.num , &a.den);
  return a;
}
Fraction Largest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
  float p ,q,r;
  p = f1.num/f1.den;
   q = f2.num/f2.den;
   r = f3.num/f3.den;
  if(p>q&&p>r)
    return f1;
  else
  if(q>p&&q>r)
    return f2;
  else 
    return f3;
  
}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction largest)
{
  printf("largest among  (%d/%d) ,(%d/%d) and (%d/%d) is %d/%d \n",f1.num,f1.den,f2.num,f2.den, f3.num,f3.den, largest.num,largest.den);
}
int main()
{
  Fraction f1,f2,f3,large;
  f1 = input_fraction();
  f2 = input_fraction();
  f3 = input_fraction();
  large = Largest_fraction(f1,f2,f3);
  output(f1,f2,f3,large);
  return 0;
  }




