#include <stdio.h>
#include <stdlib.h>

char* bitmap;

unsigned int get_bit(char num, int pos)
{
  if(pos > 8)
    return 0;
  return (num >> pos) & 1;
}

void print_bits(char num)
{
  printf("bytes in the byte array: ");
  for(int i=0; i<8; i++) {
    if(i % 4 == 0)
      printf(" ");
    printf("%u", get_bit(num, 7-i));
  }
  printf(".\n");
}

void SetBitShort(int n)
{
  printf("Setting %d\n", n);
  bitmap[n / 8] |= 1 << n % 8;
}

int CheckBitShort(int n)
{
  return (bitmap[n / 8] >> (n % 8)) & 1;
}

void SetBit(int n) 
{
  printf("Setting %d\n", n);
  int bytePosition = n / 8;
  int bitPosition = n % 8;

  char one = 1;
  one <<= bitPosition;

  bitmap[bytePosition] |= one;
}

int CheckBit(int n)
{
  int bytePosition = n / 8;
  int bitPosition = n % 8;

  char one = 1;
  one <<= bitPosition;

  return (bitmap[bytePosition]>>bitPosition) & 1;
}

int main()
{
  int nByte = 2;
  //int nByte = 1024*1024;

  bitmap = (char*) malloc(nByte);

  for(int i=0; i<nByte; i++) {
    bitmap[i] = 0;
  }

  printf("Initial Byte Array\n");
  for(int i=0; i<nByte; i++) {
    print_bits(bitmap[i]);
  }

  SetBitShort(9);
  SetBitShort(10);
  SetBitShort(11);
  SetBitShort(13);

  printf("\n");
  printf("Final Byte Array\n");
  for(int i=0; i<nByte; i++) {
    print_bits(bitmap[i]);
  }

  for(int i=0; i<16; i++) {
    printf("%d is %d\n", i, CheckBitShort(i));
  }
}
