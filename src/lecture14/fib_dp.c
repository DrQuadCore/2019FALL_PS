#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ll long long int

ll* fibNums;

ll fib(int n)
{
  if(fibNums[n] != 0)
    return fibNums[n];
  if (n == 1) 
    return fibNums[1] = 1;
  if (n == 2)
    return fibNums[2] = 1;
  return fibNums[n] = (fib(n-1) + fib(n-2));
}

int main(int argc)
{
  clock_t start, end;
  fibNums = (ll*) calloc(90+1, sizeof(ll));
  for(int i=1; i<=90; i++) {
    start = clock();
    ll n = fib(i);
    end= clock();
    printf("%d, %lld, %f \n", i, n, (float)(end-start)/CLOCKS_PER_SEC);
  }
  return 0;
}

