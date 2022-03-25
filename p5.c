/*
  7.	Write a program to find Sum of n different number
  entered by the user
    int input_n();
    void input_array(int n, int a[n]);
    int sum_n_arrays(int n, int a[n]);
    void out_put(int n, int a[n], int sum);
    input:
    1 7 11
    output:
	  1+7+11 is 19
*/
#include<stdio.h>
int input_n()
{
  int n;
  printf("Enter array size=");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  printf("Enter %d numbers = ",n);
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int sum_n(int n,int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
    {
      sum=sum+a[i];
    }
  return sum;
}
void output(int n,int a[n],int sum)
{
  for(int i=0;i<(n-1);i++)
    {
      printf("%d+",a[i]);
    }
  printf("%d is %d",a[n-1],sum);
}
int main()
{
  int n=input_n();
  int A[n];
  input_array(n,A);
  int s=sum_n(n,A);
  output(n,A,s);
  return 0;
}