/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makbulut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:44:59 by makbulut          #+#    #+#             */
/*   Updated: 2021/11/12 01:16:43 by makbulut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		g_tmuznlk;
int		g_i;
char	*g_string;
char	*g_d;

int	ft_str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_compute_final_length(char **strings, int size, int sep_length)
{
	int	suznlk;
	int	i;

	suznlk = 0;
	i = 0;
	while (i < size)
	{
		suznlk += ft_str_length(strings[i]);
		suznlk += sep_length;
		i++;
	}
	suznlk -= sep_length;
	return (suznlk);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	g_tmuznlk = ft_compute_final_length(strs, size, ft_str_length(sep));
	g_string = (char *)malloc((g_tmuznlk + 1) * sizeof(char));
	g_d = g_string;
	if (!g_d)
		return (0);
	g_i = 0;
	while (g_i < size)
	{
		ft_strcpy(g_d, strs[g_i]);
		g_d += ft_str_length(strs[g_i]);
		if (g_i < size - 1)
		{
			ft_strcpy(g_d, sep);
			g_d += ft_str_length(sep);
		}
		g_i++;
	}
	*g_d = '\0';
	return (g_string);
}
/*
int	main(void)
{
	int		i;
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = "Mehmet";
	strs[1] = "Eren";
	strs[2] = "Akbulut";
	separator = "+";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}
*/
