/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varibeir <varibeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:07:47 by varibeir          #+#    #+#             */
/*   Updated: 2024/04/29 15:12:32 by varibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c)) || (ft_isdigit(c)))
		return (1);
	return (0);
}
/* int main()
{
 	int c = 'k';
	int e = '9';
	int u = ' ';
	int p = '\n';

	printf("%d\n", ft_isalnum(c));
	printf("%d\n", ft_isalnum(e));
	printf("%d\n", ft_isalnum(u));
	printf("%d\n", ft_isalnum(p));
 	return (0);
} */