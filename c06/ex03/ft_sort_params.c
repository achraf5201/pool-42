/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 08:33:12 by ael-bala          #+#    #+#             */
/*   Updated: 2025/07/26 11:18:42 by ael-bala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	swap_string(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	putstr_sorted(int count, int i, char **str)
{
	while (i < count)
	{
		ft_putstr(str[i++]);
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		v;

	v = 1;
	while (v)
	{
		v = 0;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				swap_string(&argv[i], &argv[i + 1]);
				v = 1;
			}
			i++;
		}
	}
	putstr_sorted(argc, 1, argv);
	return (0);
}
