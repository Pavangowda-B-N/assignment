/*
    2.	Add two number using 4 function	using Pass by value
        int input();
        int add(int a, int b);
        void output(int a, int b, int sum);
        input:1 3
      output:
          sum of 1+2 is 3
*/
#include<stdio.h>
int input()
{
  int n;
  scanf("%d",&n);
  return n;
}
int add(int a,int b)
{
  int c=a+b;
  return c;
}
void output(int a,int b,int sum)
{
  printf("sum of %d+%d is %d",a,b,sum);
}
int main()
{
  printf("Enter two numbers=");
  int x=input();
  int y=input();
  int res=add(x,y);
  output(x,y,res);
  return 0;
}