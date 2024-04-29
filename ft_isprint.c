/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varibeir <varibeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:49:43 by varibeir          #+#    #+#             */
/*   Updated: 2024/04/29 15:13:09 by varibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
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

 	printf("%d\n", ft_isprint(c));
	printf("%d\n", ft_isprint(e));
	printf("%d\n", ft_isprint(y));
	printf("%d\n", ft_isprint(o));
	printf("%d\n", ft_isprint(t));
	printf("%d\n", ft_isprint(u));
	printf("%d\n", ft_isprint(g));
	return (0);
} */