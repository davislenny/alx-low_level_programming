#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector array
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *str;

	k = l = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			l++;
	l += ac + 1;/* strlen = chars + spaces + terminating character */
	str = malloc(l * sizeof(char));
	if (!str)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
