char massimapotenza(unsigned int val)
{
	if (val == 0) {
		return-1;
}
    int i;
	for (i = 0; val != 0; i++)
	{
		val = (val / 10);
	}
	return (i - 1);
}
int main(void)
{
	int z;
	z = massimapotenza(123);
	return z;
}
