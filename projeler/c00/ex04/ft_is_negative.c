/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makbulut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 11:48:36 by makbulut          #+#    #+#             */
/*   Updated: 2021/10/23 18:04:37 by makbulut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_is_negative(int n)
{
	char	neg;
	char	poz;

	neg = 'N';
	poz = 'P';
	if (n >= 0)
	{
		write(1, &poz, 1);
	}
	else
	{
		write(1, &neg, 1);
	}
}
