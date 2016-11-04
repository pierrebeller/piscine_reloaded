/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 17:30:07 by pbeller           #+#    #+#             */
/*   Updated: 2016/11/02 17:30:12 by pbeller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_print_params(int ac, char **av)
{
	int i;

	i = 1;
	if (ac < 2)
		return;
	while (i < ac)
	{
		ft_putstr(av[i]);
		i++;
	}
	return;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_params(int ac, char **tab)
{
	int		j;
	int		i;
	char	*tmp;

	j = 1;
	i = ac;
	while (i > 1)
	{
		while (j < i - 1)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		j = 1;
		i--;
	}
	ft_print_params(ac, tab);
}

int		main(int ac, char **av)
{
	char	**tab;

	if (ac < 2)
		return (0);	
	tab = av;
	ft_sort_params(ac, tab);
	return (0);
}
