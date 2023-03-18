#include <stdio.h>
/**
 * main-program entry point.
 * Return:0 if no errors, non zero if errors
 */
int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar(n + 48);
}
putchar('\n');
return (0);
}
