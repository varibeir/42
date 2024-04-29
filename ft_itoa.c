/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varibeir <varibeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:17:28 by varibeir          #+#    #+#             */
/*   Updated: 2024/04/29 16:14:24 by varibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	length(long int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	while (nb >= 1)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long int	nb;
	char		*dest;
	int			len;

	nb = n;
	len = length(nb);
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	dest[len] = '\0';
	if (nb < 0)
	{
		dest[0] = '-';
		nb *= -1;
	}
	len--;
	while (nb > 0 && len >= 0)
	{
		dest[len] = 48 + (nb % 10);
		nb /= 10;
		len--;
	}
	return (dest);
}
/*   int main()
{
	int n = 1904;
	int j = -423;

	char *str = ft_itoa(n);
	char *str1 = ft_itoa(j);
	printf("%s\n", str);
	printf("%s\n", str1);
} */ 