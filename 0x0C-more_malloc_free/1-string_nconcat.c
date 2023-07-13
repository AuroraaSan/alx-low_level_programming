#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first
 * @s2: second
 * @n: integer
 * Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, lenn1, lenn2;

	if (s1 == NULL)
		S1 = "";
	if (s2 == NULL)
		S2 = "";
	for (lenn1 = 0; s1[lenn1] != '\0'; lenn1++)
		;
	        for (lenn2 = 0; s2[lenn2] != '\0'; lenn2++)
			;
	str = malloc(lenn1 + n + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);

}
