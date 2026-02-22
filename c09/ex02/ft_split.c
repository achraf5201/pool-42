/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bala <ael-bala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:33:38 by ael-bala          #+#    #+#             */
/*   Updated: 2025/08/06 14:54:03 by ael-bala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_sep(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (check_sep(charset, str[i]) == 0
			&& (i == 0 || check_sep(charset, str[i - 1])))
			count++;
		i++;
	}
	return (count);
}

char	*ft_allocat_words(char *str, char *charset)
{
	int		len;
	int		i;
	int		j;
	char	*word;

	i = 0;
	j = 0;
	len = 0;
	while (str[len] && check_sep(charset, str[len]) == 0)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (str[i] && check_sep(charset, str[i]) == 0)
		word[j++] = str[i++];
	word[j] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		len;
	int		i;

	len = count_words(str, charset);
	arr = malloc(sizeof(char *) * (len + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && check_sep(charset, *str))
			str++;
		if (*str)
		{
			arr[i] = ft_allocat_words(str, charset);
			i++;
		}
		while (*str && check_sep(charset, *str) == 0)
			str++;
	}
	arr[i] = NULL;
	return (arr);
}
