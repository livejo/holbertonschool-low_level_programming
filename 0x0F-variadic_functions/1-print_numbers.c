#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
  va_list list;
  unsigned int i;
  const char *s = separator;

  va_start(list, n);

  i = 0;
  while (i < n)
  {
    printf("%d",va_arg(list, int));
    if (i < n - 1)
    printf("%s", s);
    i++;
  }
  printf("\n");

  va_end(list);
}