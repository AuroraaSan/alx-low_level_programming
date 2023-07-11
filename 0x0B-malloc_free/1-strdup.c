#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string in the new allocated memory
 * Return: NULL if str is NULL or the pointer
*/

char *_strdup(char *str)
{
	size_t lentt;
	char *new_str;

	if (str == NULL)
		return (NULL);
	lentt = strlen(str);
	new_str = (char *)malloc((lentt + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	strcpy(new_str, str);
	return (new_str);
}
