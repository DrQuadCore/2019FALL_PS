#include <stdio.h>
#include <time.h>

#define ll long long int

ll fib(int n)
{
  if (n == 1) 
    return 1;
  if (n == 2)
    return 1;
  ll n1 = 0, n2 = 1, n3 = 1;
  for(int i=3; i<=n; i++) {
    n1 = n2;
    n2 = n3;
    n3 = n1 + n2;
  }
  return n3;
}

int main(int argc)
{
  clock_t start, end;
  for(int i=1; i<=90; i++) {
    start = clock();
    ll n = fib(i);
    end= clock();
    printf("%d, %lld, %f \n", i, n, (float)(end-start)/CLOCKS_PER_SEC);
  }
  return 0;
}

