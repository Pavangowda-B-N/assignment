/*
5. Write a program to find gcd (hcf) of two numbers.
int input();
int gcd(int a, int b);
void output(int a, int b, int gcd); input: 12 16 output 4
*/
#include<stdio.h>
int input()
{
  int n;
  scanf("%d",&n);
  return n;
}
int gcd(int a,int b)
{
  int hcf=0;
  for(int i=1;i<=a+1 && i<=b+1 ;i++)
    {
      if(a%i==0 && b%i==0)
      {
        hcf=i;
      }
    }
  return hcf;
}
void output(int a,int b,int hcf)
{
  printf("The greatest comman divisor for %d ad %d is %d",a,b,hcf);
}
int main()
{
  printf("Enter two numbers=");
  int a=input();
  int b=input();
  int g=gcd(a,b);
  output(a,b,g);
  return 0;
}