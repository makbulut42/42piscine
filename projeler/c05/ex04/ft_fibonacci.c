/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makbulut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 04:39:58 by makbulut          #+#    #+#             */
/*   Updated: 2021/11/06 10:28:10 by makbulut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else if (index > 1)
	{
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	}
	else
		return (-1);
}	
