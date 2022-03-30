/*
8. Write a program to find the triangle with smallest area in n given triangles. struct _triangle { float base,altitude,area; }; typedef _triangle Triangle int input_n(); Triangle input_triangle(); void input_n_triangles(int n, triangle t[n]); void find_area(Triangle *t); void find_areas_n(int n, Triangle t[n]); Triangle find_smallest_triangle(int n, Triangle t[n]); void output(int n, Triangle t[n], Triangle smallest); void input: 2 3 4 6 the smallest of triangles with base and height 2,3 and 4,6 is triangle with base 2.000000, 3.000000 is 3.000000 The area of triangle wwith base = 2.000000 and altitude = 3.000000 is 3.000000
*/
#include<stdio.h>
struct triangle{
float base,altitude,area;
};
typedef struct triangle Triangle;
int get_n()
{
  int n;
  printf("How many triangles you want to add =");
  scanf("%d",&n);
  return n;
}
Triangle input()
{
  Triangle t;
  printf("Enter a triangle =");
  scanf("%f%f",&t.base,&t.altitude);
  return t;
}
void input_n(int n,Triangle t[n])
{
  for(int i=0;i<n;i++)
    {
      t[i]=input();
    }
}
void find_area(Triangle *t)
{
  t->area=0.5*t->base*t->altitude;
}
void find_n_areas(int n,Triangle t[n])
{
  for(int i=0;i<n;i++)
    {
      find_area(&t[i]);
    }
}
Triangle find_smallest(int n,Triangle t[n])
{
  Triangle res;
  res.area=t[0].area;
  for(int i=1;i<n;i++)
    {
      if(res.area>t[i].area)
      {
        res.area=t[i].area;
        res.base=t[i].base;
        res.altitude=t[i].altitude;
      }
    }
  return res;
}
void output(Triangle r)
{
  printf("The triangle with area %f of base %f and altitude %f is the smallest triangle",r.area,r.base,r.altitude);
}
int main()
{
  int n=get_n();
  Triangle t[n];
  input_n(n,t);
  find_n_areas(n,t);
  Triangle small=find_smallest(n,t);
  output(small);
  return 0;
}
