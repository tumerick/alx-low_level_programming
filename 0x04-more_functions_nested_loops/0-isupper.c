/**
 * _isupper - determines if input string is uppercase.
 * @c: possible alphneumeric character
 * Return: 1 (success)
 */

int _isupper(int c);
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
