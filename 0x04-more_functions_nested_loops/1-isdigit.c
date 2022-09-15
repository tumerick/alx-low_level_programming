/**
 * _isdigit - determines whether input is a numeric value
 * @c: <int>
 * Return: 1 (Success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
