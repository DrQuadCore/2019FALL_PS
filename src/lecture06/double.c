#include <stdio.h>

unsigned int get_bit(unsigned int num, int pos)
{
  if(pos > 32)
    return 0;
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


union num
{
  double d;
  int i[2];
};

int main()
{
  double d = 1;

  unsigned int* address1 = (unsigned int*)&d;
  unsigned int* address2 = ((unsigned int*)&d)+1;

  print_bits(*address1);
  print_bits(*address2);

  union num n;
  n.d = 1;
  print_bits(n.i[0]);
  print_bits(n.i[1]);
}


