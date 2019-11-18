#include <stdio.h>
#include <time.h>

#define ll long long int

ll fib(int n)
{
  if (n == 1) 
    return 1;
  if (n == 2)
    return 1;
  return fib(n-1) + fib(n-2);
}
int main(int argc)
{
  clock_t start, end;
  for(int i=1; i<=50; i++) {
    start = clock();
    ll n = fib(i);
    end= clock();
    printf("%d, %lld, %f \n", i, n, (float)(end-start)/CLOCKS_PER_SEC);
  }
  return 0;
}

