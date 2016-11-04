int		ft_count_if(char **tab, int(f)(char*))
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (tab[i])
	{
		if(f(tab[i] == 1))
			result++;
		i++;
	}
	return (result);
}