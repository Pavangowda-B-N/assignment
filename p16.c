/*
Q. Write a program to find nth number in fibonacci sequence.
Fibonacci sequence consists of 0,1,1,2,3,5,8,13,21........
int input();
int find_fibo(int n);
void output(int n, int fibo);
*/
#include<stdio.h>
int input()
{
  printf("Enter n=");
  int n;
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int x=0;
  int y=1;
  int temp=0;
  if(n>=2)
  {
    for(int i=1;i<n;i++)
      {
        temp=x+y;
        x=y;
        y=temp;
      }
    }
  return temp;
}
void output(int n,int fibo)
{
  printf("%dth fibonacci is %d",n,fibo);
}
int main()
{
  int n,f;
  n=input();
  f=find_fibo(n);
  output(n,f);
  return 0;
}