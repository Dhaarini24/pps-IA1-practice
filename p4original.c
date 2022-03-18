#include<stdio.h>

int input_array_size()
{
  int n;
  printf("enter the number of inputs\n");
  scanf("%d",&n);
  return n;
}

void input_array(int n, int a[n])
{
  for(int i=0;i<n;i++)
  {
    printf("enter the inputs\n");
    scanf("%d",&a[i]);
  }
}

int sum_n_arrays(int n,int a[n])
{
  int sum=0;
  for(int i=0; i<n; i++)
  {
    sum= sum+a[i];
  }
  return sum;
}

void output(int n, int a[n],int sum)
{
  printf("the sum of %d inputs is %d",n,sum);
}

int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array( n,a);
  sum=sum_n_arrays(n,a);
  output(n,a,sum);
  return 0;
}