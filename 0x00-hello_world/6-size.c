#include <stdio.h>                                                                                                                   
/**
* main - Entry
* Return: Always 0
*/
int main(void)
{
  char a;
  int b;
  long int c;
  long long int d;
  float e;
  
  printf("size of a char: %c byte(s)\n",(unsigned long) sizeof(a));
  printf("size of an int: %d byte(s)\n",(unsigned long) sizeof(b));
  printf("size of a long int: %ld byte(s)\n",(unsigned long) sizeof(c));
  printf("size of a long long : %lld byte(s)\n",(unsigned long) sizeof(d));
  printf("size of a float: %f byte(s)\n",(unsigned long) sizeof(e));
return (0);
}
