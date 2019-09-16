#include <stdio.h>

unsigned int get_bit(unsigned int num, int pos)
{
  if(pos > 32)
    return -1;
  return (num >> pos) & 1;
}

void print_bits(unsigned int num)
{
  printf("%u is ", num);
  for(int i=0; i<32; i++) {
    if(i % 4 == 0)
      printf(" ");
    printf("%u", get_bit(num, 31-i));
  }
  printf(".\n");
}

void decToBin(unsigned int n)
{
  int i, arr[8];
  for (i = 7; i>=0; i--)
  {
    arr[i] = n % 2;
    n = n/2;
  }
  for (i = 0; i<4; i++)
    printf("%d", arr[i]);
  printf(" ");
  for(i = 4; i < 8; i++)
    printf("%d", arr[i]);
  printf("\n");
}

unsigned int toggle(unsigned int num, int pos)
{
  if(pos >= 32)
    return -1;

  unsigned int one = 1;
  one = one << pos;
  return num ^ one;
}

unsigned int reset_bit(unsigned int num, int pos)
{
  if(pos >= 32)
    return -1;

  unsigned int one = 1;
  one = one << pos;
  one = ~one;
  return num & one;
}

unsigned int set_bit(unsigned int num, int pos)
{
  if(pos >= 32)
    return -1;

  unsigned int one = 1;
  one = one << pos;
  return num | one;
}

int main()
{
#if 0
  unsigned int num = 2;
  print_bits(num);

  num = set_bit(num, 3);
  print_bits(num);

  num = reset_bit(num, 3);
  print_bits(num);

  num = toggle(num, 2);
  print_bits(num);

  decToBin(num);
#endif
  int a = -1;
  unsigned int b = 1;

  print_bits(a);
  print_bits(b);
  return 0;
}
