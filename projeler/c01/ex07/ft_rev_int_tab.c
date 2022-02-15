/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makbulut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:04:40 by makbulut          #+#    #+#             */
/*   Updated: 2021/10/29 11:54:26 by makbulut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	gecici;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		gecici = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = gecici;
		i++;
	}
}
