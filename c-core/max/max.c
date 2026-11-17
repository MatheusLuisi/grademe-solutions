int max(int *tab, unsigned int len)
{
	unsigned int i;
	int hi;

	i = 0; 
	hi = tab[0];
	if (len == 0)
		return (0);
	while (i < len)
	{
		if(hi < tab[i])
			hi = tab[i];
		i++;
	}
	return (hi);
}	

