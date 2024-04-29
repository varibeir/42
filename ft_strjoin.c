/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varibeir <varibeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:12:24 by varibeir          #+#    #+#             */
/*   Updated: 2024/04/29 15:24:16 by varibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
/* int	main(void)
{
	char *test;

 	test = ft_strjoin("test", "string");
 	printf("%s\n", test);

 	free(test);
} */

/* int main()
{
	char *str;
	char *str1;
	char *result;

	str = "test string";
	str1 = "ola mundo";
	printf("str before join: %s\n", str);
	printf("str1 before join: %s\n", str1);
	result = ft_strjoin(str, str1);
	printf("Result of the joined strings: %s\n", result);
	free(result);
	return (0);
} */