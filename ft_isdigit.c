/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varibeir <varibeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:26:51 by varibeir          #+#    #+#             */
/*   Updated: 2024/04/29 15:12:59 by varibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c <= 57 && c >= 48)
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

 	printf("%d\n", ft_isdigit(c));
	printf("%d\n", ft_isdigit(e));
	printf("%d\n", ft_isdigit(y));
	printf("%d\n", ft_isdigit(o));
	printf("%d\n", ft_isdigit(t));
	printf("%d\n", ft_isdigit(u));
	printf("%d\n", ft_isdigit(g));
	return (0);
} */