/*
7. Write a program to find the area of a triangle struct _triangle { float base,altitude,area; }; <brtypedef _triangle Triangle Triangle input_triangle(); 
void find_area(Traingle *t); void output(Triangle t); input: 2 3 output: The area of triangle wwith base = 2.000000 and altitude = 3.000000 is 3.000000
*/
#include<stdio.h>
struct triangle{
  float base,altitude,area;
};
typedef struct triangle Triangle;
Triangle input()
{
  Triangle t;
  printf("Enter base and altitude of a triangle =");
  scanf("%f%f",&t.base,&t.altitude);
  return t;
}
void find_area(Triangle *t)
{
  t->area=0.5*t->base*t->altitude;
}
void output(Triangle t)
{
  printf("Area of triangle with base %f and altitude %f is %f",t.base,t.altitude,t.area);
}
int main()
{
  Triangle a;
  a=input();
  find_area(&a);
  output(a);
  return 0;
}