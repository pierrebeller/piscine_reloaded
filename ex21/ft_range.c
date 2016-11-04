#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*tab;
	int i;
	int size;

	if (min == max)
		tab = NULL;
	size = max - min;
	i = 0;
	tab = malloc(sizeof(char) * size);
	while (i < size)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
