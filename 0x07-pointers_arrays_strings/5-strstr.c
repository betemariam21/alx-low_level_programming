 #include "main.h"
/**
 *_strstr -  gets the length of a prefix substring.
 *@haystack: string character value.
 *@needle: string character value.
 *
 * Return: 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int  j = 0;

	if (needle[j] == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0' && haystack[i + j]
				     && needle[j] == haystack[i + j]; j++)
				;
			if (needle[j] == 0)
				return (haystack + i);
		}
	}
	return (0);
}
