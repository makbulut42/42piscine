/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makbulut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 04:41:51 by makbulut          #+#    #+#             */
/*   Updated: 2021/11/06 04:41:53 by makbulut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	c;

	if (nb < 2)
		return (2);
	c = 2;
	while (c <= nb / c)
	{
		if (nb % c == 0)
		{
			nb++;
			c = 1;
		}
		c++;
	}
	return (nb);
}
