/*
  9.	Write a program to Compare two strings
	 void input_two_string(char *a, char *b);
	 int strcmp(char *a, char *b);
	 void output(char *a, char *b, int result);
	 input:
	 hello 
	 world
	 output:
	 world is greater than hello
*/
#include<stdio.h>
void input_two_strings(char *a,char *b)
{
  printf("Enter two strings=");
  scanf("%s%s",a,b);
}
int strcmp(char *a,char *b)
{
  int x=0,y=0;
  for(int i=0;a[i]!='\0' || b[i]!='\0';i++)
    {
      
      if(a[i]==b[i])
      {
        x++;y++;
      }
      else if(a[i]>b[i])
      {
        x++;
      }
      else if(a[i]<b[i])
      {
        y++;
      }
    }
  if(x==y)
    return 0;
  else if(x>y)
    return 1;
  else if(x<y)
    return -1;
}
void output(char *a,char *b,int r)
{
  if(r==0)
    printf("Both strings are equall");
  else if(r==1)
    printf("%s id greater than %s",a,b);
  else if(r==-1)
    printf("%s is greter than %s",b,a);
}
int main()
{
  char a[100],b[100];
  input_two_strings(a,b);
  int res=strcmp(a,b);
  output(a,b,res);
  return 0;
}