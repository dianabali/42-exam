// #include <stdio.h>

unsigned char swap_bits(unsigned char octet)
{
    return ((octet << 4) | (octet >> 4));
}

/* int	main(void)
{
	unsigned char	octet;

	octet = 0x41; // 0100 0001
	printf("original: 0x%02X\n", octet);
	printf("swapped:  0x%02X\n", swap_bits(octet));
	return (0);
} */
