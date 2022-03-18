#include<stdio.h>
#include<math.h>

float input()
{
  float x;
  printf("enter the number which you want the square root of\n");
  scanf("%f",&x);
  return x;
}
 
float my_sqrt(float x)
{
  float guess=x/2;
  float next=x/guess;
  while(fabs(guess-next)>0.000001)
  {
    guess=(guess+next)/2;
    next=x/guess;
  }
  return next;
}

void output(float x,float sqrt_result)
{
  printf("%f is a sqrt of %f",x,sqrt_result);
}

int main()
{
  float x,y;
  x=input();
  y=my_sqrt(x);
  output(x,y);
  return 0;
}