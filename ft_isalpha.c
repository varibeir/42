/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varibeir <varibeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:28:05 by varibeir          #+#    #+#             */
/*   Updated: 2024/04/29 15:12:42 by varibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/* int main()
{
 	int c = 'k';
	int e = '9';
	int u = ' ';
	int p = '\n';
	int j = '0';
	int l = '\0';

	printf("%d\n", ft_isalpha(c));
	printf("%d\n", ft_isalpha(e));
	printf("%d\n", ft_isalpha(u));
	printf("%d\n", ft_isalpha(p));
	printf("%d\n", ft_isalpha(j));
	printf("%d\n", ft_isalpha(l));
 	return (0);
}  */