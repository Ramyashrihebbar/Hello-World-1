#include <stdio.h>

int printf(const char *format, ...);

int main(void)
{
  int nb = 20;
 
  printf("Hello World !\n");
  printf("%d\n", nb);
  printf("%s/%d\n", "Nice", 20);
  return (0);
}

/// output :
///
///	Hello World !
///	20
///	Nice/20
///
