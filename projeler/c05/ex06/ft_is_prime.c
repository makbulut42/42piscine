/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makbulut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 04:41:18 by makbulut          #+#    #+#             */
/*   Updated: 2021/11/06 04:41:21 by makbulut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	c;

	if (nb < 2)
		return (0);
	c = 2;
	while (c <= nb / c)
	{
		if (nb % c == 0)
			return (0);
		c++;
	}
	return (1);
}
