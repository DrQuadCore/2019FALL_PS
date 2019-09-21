#include <stdio.h>

union Data {
  int i;
  float f;
  char str[20];
} ;  

int main()
{
  union Data data;
  printf("%p\n", &data.i);
  printf("%p\n", &data.f);
  printf("%p\n", data.str);

  data.i = 1;
  printf("%d\n", data.i);
  data.f = 3.14;
  printf("%d\n", data.i);
  printf("%f\n", data.f);

}


