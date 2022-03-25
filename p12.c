/*
3. Write a program find whether a number is a composite number. A Composite number has a factor other than 1 and itself
int input_number();
int is_composite(int n);
void output(int n, int composite);
input:
8
output:
8 is a composite number.
  */
#include<stdio.h>
int input()
{
  printf("Enter a number=");
  int n;
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int f=0;
  for(int i=1;i<n;i++)
    {
      if(n%i==0)
          f++;
    }
  printf("\n\n%d\n\n",f);
  return f;
}
void output(int n,int composite)
{
  if(composite!=2)
  {
    printf("The given number is composite number");
  }
  else
    printf("The given number is not composite number");
}
int main()
{
  int n=input();
  int res=is_composite(n);
  output(n,res);
  return 0;
}