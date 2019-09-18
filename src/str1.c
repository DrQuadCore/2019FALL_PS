#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  // Does it work?
  char str[10] = {};
  //char* str = (char*)malloc(sizeof(char)*10);
  str = "hello";
  printf("%s", str);
}
