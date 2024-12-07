/**
 * binary_to_uint - binary to decimal
 * @b: binary string
 * Return: decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;
	unsigned int i;

	if (!b)
		return (0);

	for (decimal = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			decimal = (decimal << 1) | 1;
		else if (b[i] == '0')
			decimal <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	return (decimal);
}
