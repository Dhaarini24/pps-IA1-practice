#include<stdio.h>

void input_two_strings(char *a, char *b)
{ 
 printf("enter the two string :");
 scanf("%s",a);
 printf("enter the two string :");
 scanf("%s",b);
} 

int strcompare(char *a,char *b)
{
  int i;
  for(i=0;a[i]==b[i]&& a[i]!='\0';i++);
  { 
    return a[i]-b[i];
  }
}

void output(char *a, char *b, int result)
{
  if(result>0)
  {
     printf("the string %s is greater than %s\n ",a,b);
  }
  else if(result<0)
  {
     printf("the string %s is greater than %s\n ",b,a);
  }
  else
  {
    printf("the strings are equal");
  }
}

int main()
{
 
  char a[10],b[10];
  
   input_two_strings(a,b);
   int x= strcompare(a,b);
   output(a,b,x);
   return 0;

}