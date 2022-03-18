#include<stdio.h>
typedef struct _complex
{
  float real,imaginary;
}complex;

int input_count()
{
  int n;
  printf("enter the n value\n");
  scanf("%d",&n);
  return n;
}

void input_n(int n, complex c[n])
{
  for(int i=0;i<n;i++)
  {
    printf("enter the complex numbers\n");
  scanf("%f %f",&c[i].real,&c[i].imaginary);
  }
}
 
complex add_n_complex(int n, complex c[n])
{
  complex sum;
  sum.real=0;
  sum.imaginary=0;
  for(int i=0;i<n;i++)
  {
    sum.real+=c[i].real;
    sum.imaginary+=c[i].imaginary;
  }
  return sum;
}

void output(int n, complex c[n],complex sum)
{
  for(int i=0;i<n-1;i++)
  {
    printf("(%f+i%f)+\n",c[i].real,c[i].imaginary);
    printf("(%f+i%f)=(%f+i%f)\n",c[n-1].real,c[n-1].imaginary,sum.real,sum.imaginary);
  
  }
}

int main()
{
  int n;
  n=input_count();
  complex c[n];
  complex sum;
  input_n(n,c);
  sum=add_n_complex(n,c);
  output(n,c,sum);
  return 0;
}