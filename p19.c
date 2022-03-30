/*
Q. Write a program to find the length of a line.
struct _point {
float x,y;
};
typedef struct _point Point;
struct _line
{
Point p1,p2;
float distance;
};
typedef struct _line Line
Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);
*/
#include<stdio.h>
#include<math.h>
struct point
{
  float x,y;
};
typedef struct point Point;
struct line
{
  Point p1,p2;
  float distance;
};
typedef struct line Line;
Point input_point()
{
  Point p;
  printf("Enter a point =");
  scanf("%f%f",&p.x,&p.y);
  return p;
}
Line input_line()
{
  Line l;
  l.p1= input_point();
  l.p2=input_point();
  return l;
}
void find_length(Line *l)
{
  float x=pow(((l->p2.x)-(l->p1.x)),2);
  float y=pow(((l->p2.y)-(l->p2.y)),2);
  l->distance=sqrt(x+y);
}
void output(Line l)
{
  printf("length of the line is %f",l.distance);
}
int main()
{
  Line k;
  k=input_line();
  find_length(&k);
  output(k);
}