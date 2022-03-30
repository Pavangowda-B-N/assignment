/*
Q. Write a program to find whether the three points form a triangle.
	void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
	int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
	void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
*/
#include<stdio.h>
#include<math.h>
void input_triangle(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3)
{
	printf("Enter a three points (x1,y1) ,(x2,y2),(x3,y3) of triangle =");
	scanf("%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
	float a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	float b=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
	float c=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
	float  S=(a+b+c)/2;
	float area=sqrt(S*(S-a)*(S-b)*(S-c));
	return area;
}
void output( int istriangle)
{
	if(istriangle==0)
		printf("It not forms a triangle \n");
	else
		printf("It forms a triangle\n");
}
int main()
{
	float x1,y1,x2,y2,x3,y3,area;
	input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
	area=is_triangle(x1,y1,x2,y2,x3,y3);
	output(area);
	main();
	return 0;
}