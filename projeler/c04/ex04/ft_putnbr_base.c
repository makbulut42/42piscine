/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makbulut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:42:33 by makbulut          #+#    #+#             */
/*   Updated: 2021/11/05 19:12:56 by makbulut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_error_check(char *str, int bl)
{
	int	i;
	int	j;

	i = 0;
	if (bl <= 1)
		return (0);
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == 127 || str[i] <= 32)
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	bl;

	bl = ft_strlen(base);
	if (ft_error_check(base, bl) == 1)
	{
		if (nbr == -2147483648)
		{
			ft_putchar('-');
			ft_putnbr_base(nbr / -bl, base);
			ft_putnbr_base((nbr % -bl) * -1, base);
		}
		else if (nbr >= bl)
		{
			ft_putnbr_base(nbr / bl, base);
			ft_putnbr_base(nbr % bl, base);
		}
		else if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
			ft_putnbr_base(nbr, base);
		}
		else
			ft_putchar(base[nbr]);
	}
}
