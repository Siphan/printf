#include <stdio.h>
#include <ctype.h>

int main ( void )
{
  unsigned i,j;
  for (i=0; i < UINT_MAX; i++)
    for (j=0; j < UINT_MAX; j++)
    {
      putchar('.');
      fflush(stdout);
    }

  return 0;
}
