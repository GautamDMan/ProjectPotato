void main(void)
{
	sfr p^3 = 0xff; //check if the display works
	int[10] ctr = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x67}
	while(1)
	{
		while( i < 10)
		{
			p^3 = ctr[i];
			delay();
			++i;
		}
		i = 0;
	}
}
