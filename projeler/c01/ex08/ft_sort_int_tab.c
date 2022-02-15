/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makbulut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:04:18 by makbulut          #+#    #+#             */
/*   Updated: 2021/10/29 11:56:58 by makbulut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	next;
	int	swap;

	i = 0;
	while (i < size)
	{
		next = i + 1;
		while (next < size)
		{
			if (tab[i] > tab[next])
			{
				swap = tab[i];
				tab[i] = tab[next];
				tab[next] = swap;
			}
			next++;
		}
		i++;
	}
}
