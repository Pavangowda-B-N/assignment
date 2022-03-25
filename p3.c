/*
   5.	Write a program to Compare 3 numbers using 4 functions
        	Pass by reference 
*/
#include<stdio.h>
void input(int *a,int *b,int *c)
{
  printf("Enter three numbers=");
  scanf("%d%d%d",a,b,c);
}
void cmp(int a,int b,int c,int *l)
{
  if(a>=b && a>=c)
  {
    *l=a;
  }
  else if(b>=a && b>=c)
  {
    *l=b;
  }
  else
    *l=c;
}
void output(int a,int b,int c,int l)
{
  printf("The largest number among %d %d and %d is %d",a,b,c,l);
}
int main()
{
  int x,y,z,lar;
  input(&x,&y,&z);
  cmp(x,y,z,&lar);
  output(x,y,z,lar);
  return 0;
}