#include <stdlib.h>

int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char 	*dest;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (0);
	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
