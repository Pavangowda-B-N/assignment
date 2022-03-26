/*
4. Write a program to find Sum of composite number in an array of numbers different containing numbers entered by the user.
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void out_put(int sum);
input:
1 2 7 8 12
output:
20
  */
#include<stdio.h>
int input_n()
{
  printf("Enter n=");
  int n;
  scanf("%d",&n);
  return  n;
}
void input_array(int n,int a[n])
{
  printf("Enter %d numbers = ",n);
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int sum_composite(int n,int a[n])
{
  int f=0;
  int sum=0;
  for(int i=0;i<n;i++)
    {
      int v=a[i];
      for(int j=1;j<v;j++)
        {
          if(v%j==0)
            f++;
        }
      if(f>2)
        sum=sum+v;
      f=0;
    }
  return sum;
}
void output(int s)
{
  printf("Sum of composite numbers is %d",s);
}
int main()
{
  int n=input_n();
  int a[n];
  input_array(n,a);
  int res=sum_composite(n,a);
  output(res);
  return 0;
}