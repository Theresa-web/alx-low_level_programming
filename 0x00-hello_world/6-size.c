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
  
  printf("size of a char: %c byte(s)\n",(long unsigned int) sizeof(a));
  printf("size of an int: %d byte(s)\n",(long unsigned int) sizeof(b));
  printf("size of a long int: %ld byte(s)\n",(long unsigned int) sizeof(c));
  printf("size of a long long : %lld byte(s)\n",(long unsigned int) sizeof(d));
  printf("size of a float: %f byte(s)\n",(long unsigned int) sizeof(e));
return (0);
}
