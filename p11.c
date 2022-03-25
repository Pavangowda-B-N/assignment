/*

2. Write a program to find if a triangle is scalene. A triangle is a scalene traingle if all the three sides of the triangle are not equal to each other.

<br> int input_side()
<br> int check_scalene(int a, int b, int c)
<br> void output(int a, int b, int c, int isscalene)
*/
#include<stdio.h>
int input_side()
{
  int n;
  scanf("%d",&n);
  return n;
}
int is_scalene(int a,int b,int c)
{
  if(a!=b && a!=c)
      return 1;
  else
      return 0;
}
void output(int isscalene)
{
  if(isscalene==1)
    printf("the given triangle is scalene");
  else
    printf("The given triangle is not a scalene");
}
int main()
{
  printf("Enter three sides of a triangle=");
  int a=input_side();
  int b=input_side();
  int c=input_side();
  int res=is_scalene(a,b,c);
  output(res);
  return 0;
}
