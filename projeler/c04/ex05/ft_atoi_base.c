/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makbulut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:04:37 by makbulut          #+#    #+#             */
/*   Updated: 2021/11/05 21:39:49 by makbulut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_checker(char *k)
{
	int	i;
	int	b;

	b = 1;
	i = 0;
	while (k[i] != '\0')
	{
		while (k[i] != k[b] && k[b] != '\0')
			b++;
		if (k[i] == k[b])
			return (-1);
		i++;
	}
	return (0);
}

int	us_hesap(int nb, int us)
{
	int	i;

	i = 1;
	if (us == 0)
		return (1);
	while (us > 0)
	{
		i = i * nb;
		us--;
	}
	return (i);
}

int	converter(int nmr, int len, int nm_len)
{
	int	ind;
	int	sayi;
	int	us;
	int	cpy;

	cpy = nmr;
	us = 0;
	sayi = 0;
	ind = 0;
	while (nm_len > 0)
	{
		cpy = nmr % 10;
		sayi = ((cpy * us_hesap(len, us)) + sayi);
		nm_len--;
		nmr /= 10;
		us++;
	}
	return (sayi);
}

int	ft_atoi(char *str)
{
	int	i;
	int	mi;
	int	i_vlue;

	i_vlue = 0;
	i = 0;
	mi = 1;
	while (str[i] <= 32 || str[i] == 127)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-' )
			mi *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57 )
	{
		i_vlue = (str[i] - 48) + (i_vlue * 10);
		if (str[i + 1] < 48 || str[i + 1] > 57 )
			break ;
		i++;
	}
	return (i_vlue * (mi));
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nbr;
	int	cpy;
	int	nmr_len;

	i = 0;
	nbr = ft_atoi(str);
	cpy = nbr;
	nmr_len = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] <= 32
			|| base[i] == 127 || base_checker(base) == -1)
			return (0);
		i++;
	}
	while (cpy > 0)
	{
		nmr_len++;
		cpy = cpy / 10;
	}
	return (converter(nbr, i, nmr_len));
}
/*
int main()
{
	char a[] = "---162a";
	char b[] = "01";
	printf("sayi: %d", ft_atoi_base(a,b));
}*/
