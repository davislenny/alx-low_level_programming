#include "main.h"
/**
 * _strlen - Returns string length
 * @s: Poniter to the string
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * find_num - returs integer location
 * @s: The string
 * Return: integer locatio
 */
int find_num(char *s)
{
	int i;

	for (i = 0; i <_strlen(s); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			return (i);
	}
	return (-1);
}
/**
 * find_sign - return integer value
 * @s: integer string
 * Return: sign
 */
int find_sign(char *s)
{
	int neg = 0, i = 0, sign = 1;

	while (i < (find_num(s)))
	{
		if (s[i++] == '-')
			neg++;
	}
	if (neg % 2 != 0)
		sign = -1;
	return (sign);
}
/**
 * _atoi - convert string to int
 * @s: the string
 * Return: int
 */
int _atoi(char *s)
{
	int sign, dig, t, i, dig2;
	unsigned int num = 0;
	t = 1;
	dig = 0;
	dig2 = find_num(s);

	if (find_num(s) < 0)
		return (0);
	sign = find_sign(s);
	while ((s[find_num(s)] >= '0' && s[find_num(s)] <= '9') && (find_num(s) <= _strlen(s)))
	{
		dig += 1;
		dig2++;
	}
	i = 1;
	for (i = dig2; i < (dig2 + dig); i++)
	{
		num += (s[i] - '0') * t;
		t /= 10;
	}
	return (num * sign);
}
