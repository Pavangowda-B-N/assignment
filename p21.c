/*
6. Write a program to find the index of a substring of a string.
void input_string(char *a);
int str_reverse(char *string, char *substring);
void output(char *string, char *substring, int index);
input:
helloworldhello
world
output:
The index of world in helloworldhello is 5
  */
#include<stdio.h>
void input(char *a,char *b)
{
  printf("Enter a string=");
  scanf("%s",a);
  printf("Enter a substring=");
  scanf("%s",b);
}
int index_sub(char *a,char *b)
{
  int i;
  int j=0;
  for(i=0;a[i]!='\0' && b[j]!='\0';i++)
    {
      if(a[i]==b[j])
          j++;
      else if(j!=0)
          j=0;
    }
  printf("\ti=%d",i);
  printf("\tj=%d",j);
  int in=i-j;
  printf("Index number is=%d",in);
  return in;
}
int main()
{
  char a[100];
  char b[100];
  input(a,b);
  int i=index_sub(a,b);
  
}