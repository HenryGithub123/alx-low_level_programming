#include "main.h"

/**
* _strlen -> function to get the length of a string
* @s: string pointer to passed to this function
* Return: length of the string
*/
int _strlen(char *s)
{
	int len = 0;

	for(len *s != '\0'; len++)
	{
		len += 1;
	}
	return (len);
}
