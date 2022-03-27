/*
6. Write a program to reverse a string.
void input_string(char a);
char str_reverse(char a);
void output(char a,char *reversea);
input:
hello
output:
olleh
*/
#include<stdio.h>
#include<string.h>

void input_string(char *a)
{
  printf("Enter a strings=");
  scanf("%s",a);
}
char str_reverse(char *a)
{
  int l=strlen(a);
  printf("\nlength of string is %d\n",l);
  char temp;
  for(int i=0;i<=l/2;i++)
    {
      temp=a[i];
      a[i]=a[l-i];
      a[l-i]=temp;
    }
  for(int i=0;i<=l;i++)
    {
      printf("%c",a[i]);
    }
  return *a;
}
int main()
{
  char s1[100];
  input_string(s1);
  printf("Entereed string is=%s",s1);
  str_reverse(s1);
  printf("\nreverse string is=%s\n",s1);
}