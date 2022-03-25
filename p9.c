/*
 11. Write a program to find Sum of n complex numb<br> ers
	 struct _co<br> mplex
	 {
      float real,imaginary;
	 }
	 typedef _complex Complex;
	 int get_n();
	 Complex input_complex();
	 void input_n_complex(int n, Complex c[n]);
	 Complex add(Complex a, Complex b);
	 Complex add_n_complex(int n, Complex c[n]);
	 void output(int n, Complex c[n], Complex result);
 	input:
	2
	 2 + 3i 
	 4 + 5i
	 2 + 3i 
	 4 + 5i is 
	 6 + 8i
*/
#include<stdio.h>
struct _complex
{
  float real,imaginary;
};
typedef struct _complex Complex;
int get_n()
{
  printf("How many complex numbers you want to add=");
  int n;
  scanf("%d",&n);
  return n;
}
Complex input()
{
  Complex c;
  printf("Enter a complex number=");
  scanf("%f%f",&c.real,&c.imaginary);
  return c;
}
void input_n_complex(int n,Complex c[n])
{
  for(int i=0;i<n;i++)
    {
      c[i]=input();
    }
}
Complex add(Complex a,Complex b)
{
  Complex c;
  c.real=a.real+b.real;
  c.imaginary=a.imaginary+b.imaginary;
  return c;
}
Complex add_n(int n,Complex c[n])
{
  Complex sum;
  sum.real=0;
  sum.imaginary=0;
  for(int i=0;i<n;i++)
    {
      sum=add(sum,c[i]);
    }
  return sum;
}
void output(Complex res)
{
  printf("Sum is %f+%fi",res.real,res.imaginary);
}
int main()
{
  int n=get_n();
  Complex c[n];
  input_n_complex(n,c);
  Complex res=add_n(n,c);
  output(res);
  return 0;
}