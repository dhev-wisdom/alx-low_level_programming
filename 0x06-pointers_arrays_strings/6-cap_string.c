#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: The string whose words wre to be capitalized
 *
 * Return: The capitalized string.
 */

char *cap_string(char *str)
{
	char delimeters[] = " \t\n,;.!?\"(){}";
	int i = 0, j;

	for (; str[i]; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}

		for (j = 0; delimeters[j]; j++)
		{
			if (str[i] == delimeters[j])
			{
				i++;
			}

			int k;
			for (k = 0; delimeters[k]; k++)
			{
				if (str[i] == delimeters[k])
				{
					i++;
				}
			}
		}
	}

	return (str);
}
