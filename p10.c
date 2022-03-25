/*
1. Write a program to find the area of a triangle using following function signatures.
void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);
input:
1
2
output:
the area of the traingle with base 1.000000 and height 2.000000 is 1.000000
*/
#include<stdio.h>
void input(float *base,float *height)
{
  printf("Enter base and height of a triangle =");
  scanf("%f%f",base,height);
}
void find_area(float base,float height,float *area)
{
  *area=0.5*base*height;
}
void output(float base,float height,float area)
{
  printf("The area of the triangle with base %f and height %f is %f",base,height,area);
}
int main()
{
  float b,h,A;
  input(&b,&h);
  find_area(b,h,&A);
  output(b,h,A);
  return 0;
}