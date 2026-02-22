/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 18:53:31 by ael-bala          #+#    #+#             */
/*   Updated: 2025/07/21 15:17:10 by ael-bala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] = '\0')
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && to_find[j] != '\0')
			j++;
		if (to_find[j] != '\0')
			return (str + i);
		i++;
	}
	return (0);
}
