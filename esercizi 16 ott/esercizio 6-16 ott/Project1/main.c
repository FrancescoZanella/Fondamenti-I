unsigned int primo(unsigned int val)
{
	int i,c;
	i = 2;
	c = 1;
	while (i < val) {
		if (val%i == 0)
			c = 0;		
		i++;
	}
	if (c == 1)
		return 1;
	else
		return 0;
}
int main(void) {
	unsigned int z;
	z = primo(89);
	return z;
}