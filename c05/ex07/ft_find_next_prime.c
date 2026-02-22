/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:25:07 by ael-bala          #+#    #+#             */
/*   Updated: 2025/08/02 12:31:49 by ael-bala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	v;

	i = 1;
	v = 0;
	while (i <= nb)
	{
		if (nb % i == nb || nb % i == 0)
			v++;
		i++;
	}
	if (v == 2)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	while (!(ft_is_prime(nb + i)))
	{
		i++;
	}
	return (nb + i);
}
