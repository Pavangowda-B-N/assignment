/*
 8. Write a program to find the square root of a number.
	 float input();
	 float my_sqrt(float n);
	 void output(float n, float sqrt_result);
*/
#include<stdio.h>
#include<math.h>
float input()
{
  printf("Enter n =");
  float n;
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float x=n/2;
  float sq=0.5*(x+(n/x));
  while(fabs(x-sq)>0.000001)
    {
      x=sq;
      sq=0.5*(x+(n/x));
    }
  return sq;
}
void output(float n,float res)
{
  printf("square root of %f is %f",n,res);
}
int main()
{
  float n=input();
  float s=my_sqrt(n);
  output(n,s);
  return 0;
}