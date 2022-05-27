#include <stdio.h>
#include <math.h>
void main()
{
  int a = 1, d = 1;
  int n;
  double sum;
  printf(" Enter the value of n: ");
  scanf("%d", &n);

  sum = (n * (2 + (n - 1))) / 2;
  printf("Sum=%lf", sum);
}