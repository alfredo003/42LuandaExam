void print_bits(unsigned char octet)
{
	unsigned char res;
	int i = 8;

	while(i--)
	{
		res = (octet >> i & 1)+'0';
		write(1,&res,1);
	}
}
