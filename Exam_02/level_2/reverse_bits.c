unsigned char reverse_bits(unsigned char octet)
{
    unsigned char result = 0;
    int i = 0;
    while (i < 8)
    {
        result = (result << 1) | (octet & 1);
        octet = octet >> 1;
        i++;
    }
    return (result);
}

/* void	print_binary(unsigned char octet)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if (octet & (1 << i))
			printf("1");
		else
			printf("0");
		i--;
	}
	printf("\n");
} */

/* int main(void)
{
    int a = 2;
    unsigned char result = reverse_bits(a);
    print_binary(result);
} */
