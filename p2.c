/*
    3.	Add two numbers using 4 functions and Pass by reference
		     Pass by value
	       void input(int *a, int *b);
		    void add(int a, int b, int *sum);
	       void output(int a, int b, int sum);
		input:
		    1
        2
		 output:
		  sum of 1+2 is 3
*/
#include<stdio.h>
void input(int *a,int *b)
{
  printf("Enter two numbers = ");
  scanf("%d%d",a,b);
}
void add(int a,int b,int *c)
{
  *c=a+b;
}
void output(int a,int b,int sum)
{
  printf("sum of %d+%d is %d",a,b,sum);
}
int main()
{
  int x,y,z;
  input(&x,&y);
  add(x,y,&z);
  output(x,y,z);
  return 0;
}