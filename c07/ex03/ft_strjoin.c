/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bala <ael-bala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 11:44:00 by ael-bala          #+#    #+#             */
/*   Updated: 2025/07/28 18:34:52 by ael-bala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
}

int	total_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			j++;
		len += j;
		i++;
	}
	j = 0;
	while (sep[j])
		j++;
	len += j * (size - 1);
	return (len);
}

char	*allocate_result(int size, char **strs, char *sep)
{
	char	*result;
	char	tlen;

	if (size == 0)
	{
		result = malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	tlen = total_len(size, strs, sep);
	result = malloc(tlen + 1);
	if (!result)
		return (NULL);
	result[0] = '\0';
	return (result);
}

void	result(int size, char **strs, char *sep, char *result)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*r;

	r = allocate_result(size, strs, sep);
	if (!r)
		return (NULL);
	if (size > 0)
		result(size, strs, sep, r);
	return (r);
}
