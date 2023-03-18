#include <stdio.h>
/**
 * main-program entry point.
 * Return: 0 if no error, non zero if error.
 */
int main(void)
{
int n = 122;
while (n >= 97)
{
putchar (n);
n--;
}
putchar ('\n');
return (0);
}
