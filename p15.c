/*
6. Write a program to reverse a string.
void input_string(char a);
int str_reverse(char a);
void output(char a,int reverse);
input:
hello
output:
olleh
*/
#include<stdio.h>
void input_string(char *a)
{
  printf("Enter a strings=");
  scanf("%s",a);
}
int str_reverse(char *a)
{
  int l=0;
  for(int i=0;a[i]!='\0';i++)
    {
      l++;
    }
  return l;
}
void output(char *a,int reverse)
{
  for(int i=reverse;i>=0;i--)
    {
      printf("%c",a[i]);
    }
  printf(" is the revrse string of %s",a);
}
int main()
{
  char a[100];
  input_string(a);
  int length=str_reverse(a);
  output(a,length);
  return 0;
  
}
