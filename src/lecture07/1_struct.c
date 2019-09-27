#include <stdio.h>

#define TYPE 0
#if TYPE==0
struct Date
{
  int day;
  int month;
  int year;
};
#elif TYPE==1
typedef struct Date
{
  int day;
  int month;
  int year;
} DATE;
#elif TYPE==2
struct Date
{
  int day;
  int month;
  int year;
};
typedef struct Date DATE;
#endif

int main()
{
  printf("Current TYPE: %d\n\n", TYPE);
#if TYPE==0
  printf("TYPE0:\n");
  struct Date date1;
  date1.day = 21;
  date1.month = 1;
  date1.year = 2016;

  printf("%d/%d/%d\n", date1.month, date1.day, date1.year);
#else
  printf("TYPE1,2:\n");
  DATE date1;
  date1.day = 21;
  date1.month = 1;
  date1.year = 2016;

  printf("%d/%d/%d\n", date1.month, date1.day, date1.year);
#endif

}
