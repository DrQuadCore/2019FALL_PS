#include <stdio.h>

struct Date
{
  int day;
  int month;
  int year;
};

struct Time
{
  int hour;
  int minute;
  double sec;
};

#if PADDING
struct A
{
    short int i;    // 2 bytes
    char c;         // 1 byte
};
#else
struct A
{
    char c;         // 1 byte
    short int i;    // 2 bytes
} __attribute__((packed));
#endif


struct C
{
  char c;   // 1 byte
  double d;   // 8 bytes
  int i;      // 4 bytes
};

struct D
{
  char c;   // 1 byte
  int i;      // 4 bytes
  double d;   // 8 bytes
};

struct DateBitfield
{
  int day : 5;
  int month : 4;
  int year : 11;
};

int main()
{
  printf("size of Date: %lu bytes\n", sizeof(struct Date));
  printf("size of Time: %lu bytes\n", sizeof(struct Time));

  printf("size of A: %lu bytes\n", sizeof(struct A));
  printf("size of C: %lu bytes\n", sizeof(struct C));
  printf("size of D: %lu bytes\n", sizeof(struct D));

  printf("size of DateBitfield: %lu bytes\n", sizeof(struct DateBitfield));

  struct DateBitfield db;
  db.day = 100;
  printf("db.day: %d\n", db.day); 
  printf("db.month: %d\n", db.month); 
  printf("db.year: %d\n", db.year); 
}
