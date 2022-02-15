/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makbulut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 04:37:03 by makbulut          #+#    #+#             */
/*   Updated: 2021/11/06 04:37:10 by makbulut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if (nb >= 0 && power == 0)
		return (1);
	else
	{
		res = 1;
		while (power > 0)
		{
			res = res * nb;
			power--;
		}
		return (res);
	}
	return (0);
}
