/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varibeir <varibeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:59:47 by varibeir          #+#    #+#             */
/*   Updated: 2024/04/29 15:11:38 by varibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*p;

	p = malloc(num * size);
	if (p == NULL)
		return (NULL);
	if (num == 0 || size == 0)
		return (p);
	ft_bzero(p, num * size);
	return (p);
}
/* int main()
{
	int *buffer;
	int buffer_elements;
	int i;

	i = 0;
	buffer_elements = 5;
	buffer = (int *)ft_calloc(buffer_elements, sizeof(int));
	if (!buffer)
	{
		printf("Memory allocation failed!");
		return (1);
	}
	printf("Inicialized values:\n");
	while(i < buffer_elements)
	{
		printf("%d", buffer[i]);
		i++;
	}
	printf("\n");
	free(buffer);
	return(0);
} */