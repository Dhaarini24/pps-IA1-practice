#include<stdio.h>

struct _complex
{
  float real,imaginary;
};

typedef struct _complex complex;

complex input_complex()
{
  complex c;
  printf("enter thr real and imaginary parts of complex number\n");
  scanf("%f %f",&c.real,&c.imaginary);
  return c;
}

complex add(complex a, complex b)
{
  complex c;
  c.real=a.real+b.real;
  c.imaginary=a.imaginary+b.imaginary;
  return c;
}

void output(complex a, complex b, complex c)
{
  printf("(%f+i/%f)+(%f+i%f)is (%f+i%f)\n",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}

int main()
{
  complex a,b,c;
  a=input_complex();
  b=input_complex();
  c= add(a,b);
  output(a,b,c);
  return 0;
}
