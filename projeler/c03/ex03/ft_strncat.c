/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saozcan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:53:28 by saozcan           #+#    #+#             */
/*   Updated: 2021/10/30 18:54:20 by saozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	si;

	i = 0;
	si = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[si + i] = src[i];
		i++;
	}
	dest[si + i] = '\0';
	return (dest);
}
