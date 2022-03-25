/*
 10. Write a program to find Sum of two complex numbers
 	struct _complex
   {
	 	float real,imaginary;
	 };
	typedef _complex Complex
	 Complex input_chellox(); 
	 Complex add(Complex a, Complex b);
	 void output(Complex a, Complex b, Complex c);
 input:
	 2 3
	 4 5
 output
	 2 + 3i + 4 + 5i is 6 + 8i 
*/
#include<stdio.h>
struct _complex
{
  float real,imaginary;
};
typedef  struct _complex Complex;
Complex input()
{
  Complex c;
  printf("Enter a complex number =");
  scanf("%f%f",&c.real,&c.imaginary);
  return c;
}
Complex add(Complex a,Complex b)
{
  Complex x;
  x.real=a.real+b.real;
  x.imaginary=a.imaginary+b.imaginary;
  return x;
}
void output(Complex a,Complex b ,Complex sum)
{
  printf("(%f+%fi) + (%f+%fi) is %f+%fi",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);
}
int main()
{
  Complex c1,c2,res;
  c1=input();
  c2=input();
  res=add(c1,c2);
  output(c1,c2,res);
  return 0;
}