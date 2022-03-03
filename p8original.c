#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;
int find_gcd(int a, int b)
{ int t;
  while(b!=0)
    {
      t =b;
      b = a%b;
      a = t;
    }
  return a;
}
int input_fraction()
{ int n;
  printf("enter the number of fraction to be added\n");
  scanf("%d",&n);
  return n;
}
void input_in_fractions(int n, Fraction f[n])
{ 
  Fraction input()
{
  Fraction f;
  printf("enter the farction\n");
  scanf("%d%d",&f.num,&f.den);
  return f;
}

  for(int i =0 ; i<n;i++)
    {
      f[i]= input();
    }
}
 

Fraction add_n_fractions(int n,Fraction f[n])
{
  Fraction add_fractions(Fraction f1, Fraction f2)
{
  Fraction sum;
  sum.num = f1.num*f2.den + f2.num*f1.den;
  sum.den = f1.den*f2.den;
  int g = find_gcd(sum.num , sum.den);
  sum.num = sum.num/g;
  sum.den = sum.den/g;
  return sum;
    
  }
  Fraction sum;
  sum =f[0];
  for(int i =1;i<n;i++)
    {
      sum = add_fractions(sum,f[i]);
    }
  return sum;
}
void output(int n, Fraction f[n], Fraction sum)
{ int i;
  printf("sum of\t");
  for(i=0;i<n;i++)
    {
      printf("%d/%d+\t",f[i].num,f[i].den);
    }
 // printf("%d/%d+",f[i].num,f[i].den);
  printf("\n %d/%d",sum.num,sum.den);
  
}
int main()
{ int n;
n = input_fraction();
  Fraction f[n],sum;
input_in_fractions(n, f);
sum =  add_n_fractions( n ,f );
output(n,f,sum);
    return 0;
}
