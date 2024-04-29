/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varibeir <varibeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:27:21 by varibeir          #+#    #+#             */
/*   Updated: 2024/04/29 18:00:57 by varibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/* int main()
{	

 	int c = 'k';
	int e = 'R';
	int y = '1';
	int o = '0';
	int t = '\0';
	int u = '\n';
	int g = '\t';

 	printf("%d\n", ft_isascii(c));
	printf("%d\n", ft_isascii(e));
	printf("%d\n", ft_isascii(y));
	printf("%d\n", ft_isascii(o));
	printf("%d\n", ft_isascii(t));
	printf("%d\n", ft_isascii(u));
	printf("%d\n", ft_isascii(g));
	return (0);
} */