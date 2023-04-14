#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int size1 = 0, size2 = 0, i;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[size1] != '\0')
{
size1++;
}
while (s2[size2] != '\0')
{
size2++;
}
if (n > size2)
n = size2;
p = malloc((size1 + n + 1) * sizeof(char));

if (p == NULL)
return (0);

for (i = 0; i < size1; i++)
{
p[i] = s1[i];
}

for (; i < (size1 + n); i++)
{
p[i] = s2[i - size1];
}
p[i] = '\0';
return (p);
}
Task: 2. _calloc
#include "main.h"

/**
 * _memset - copy char
 * @s: string
 * @b: input
 * @n: bytes
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
}
return (s);
}
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: n elements
 * @size: bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size);
{
void *p;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);

if (p == NULL)
return (NULL);
_memset(p, 0, (nmemb * size));
return (p);
}
